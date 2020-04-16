reg_t tmp = npc;
set_pc(((RS1 << 2) + RS2) & ~reg_t(1));
WRITE_RD(tmp);
