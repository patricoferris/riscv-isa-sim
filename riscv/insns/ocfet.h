require_rv64;
sreg_t stack_pointer = sext_xlen(RS1 + insn.i_imm()); 
// Store first in case of fault and rerunning of instruction
MMU.store_uint64(stack_pointer + (-insn.i_imm() - 8), READ_REG(X_RA));
// Only then update the stack pointer!
WRITE_RD(stack_pointer);