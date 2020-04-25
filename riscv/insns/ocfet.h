require_rv64;
WRITE_RD(sext_xlen(RS1 + insn.i_imm()));
MMU.store_uint64(RS1 + (-insn.i_imm() - 8), X_RA);