require_rv64;
reg_t sp = RS1; 
WRITE_RD(sext_xlen(RS1 + insn.i_imm()));
MMU.store_uint64(sp + (-insn.i_imm() - 8), X_RA);