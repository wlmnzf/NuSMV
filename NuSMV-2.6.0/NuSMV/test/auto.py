import os

with open('attack_flush_reload.smv', 'r') as f:
    smv=f.read()
    attacker=["nop","load","store"]
    victim=["nop","load","store"]
    # attacker=["nop","load","store","flush","branch"]
    # victim=["nop","load","store","flush"]
    if not os.path.exists("tmp"):
        os.mkdir("tmp")

    for i in range(len(attacker)):
        for j in range(len(victim)):
            if(attacker[i]=="branch" and victim[j]=="flush"):
                continue
            f_path="tmp/F%d%d.smv" % (i,j)
            with open(f_path,'w') as f:
                smv_cpy=smv.replace("{INIT_SC}",'FALSE')
                smv_cpy=smv_cpy.replace("{INIT_ATTACKER}",attacker[i])
                smv_cpy=smv_cpy.replace("{INIT_VICTIM}",victim[j])
                f.write(smv_cpy)

    attacker=["nop","load","store","flush"]
    victim=["nop","load","store","flush"]
    for i in range(len(attacker)):
        for j in range(len(victim)):
            if(attacker[i]=="branch" and victim[j]=="flush"):
                continue
            f_path="tmp/T%d%d.smv" % (i,j)
            with open(f_path,'w') as f:
                smv_cpy=smv.replace("{INIT_SC}",'TRUE')
                smv_cpy=smv_cpy.replace("{INIT_ATTACKER}",attacker[i])
                smv_cpy=smv_cpy.replace("{INIT_VICTIM}",victim[j])
                f.write(smv_cpy)