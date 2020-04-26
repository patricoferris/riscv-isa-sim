require_rv64;
reg_t stack_pointer = sext_xlen(RS1 + insn.i_imm()); 
WRITE_RD(stack_pointer);
MMU.store_uint64(stack_pointer + (-insn.i_imm() - 8), X_RA);