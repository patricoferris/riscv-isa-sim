require_rv64;
WRITE_REG(X_RA, MMU.load_int64(RS1 + insn.i_imm() - 8));
WRITE_RD(sext_xlen(RS1 + insn.i_imm())); 