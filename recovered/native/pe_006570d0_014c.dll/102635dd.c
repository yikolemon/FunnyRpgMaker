/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 102635dd */

void __thiscall FUN_102635dd(int param_1,uint param_2)

{
  uint uVar1;
  formatting_buffer *pfVar2;
  formatting_buffer *pfVar3;
  
  pfVar3 = *(formatting_buffer **)(param_1 + 0x440);
  if (*(formatting_buffer **)(param_1 + 0x440) == (formatting_buffer *)0x0) {
    pfVar3 = (formatting_buffer *)(param_1 + 0x3c);
  }
  uVar1 = __crt_stdio_output::formatting_buffer::count<char>((formatting_buffer *)(param_1 + 0x3c));
  pfVar3 = pfVar3 + (uVar1 - 1);
  *(formatting_buffer **)(param_1 + 0x30) = pfVar3;
  pfVar2 = pfVar3;
  for (; (0 < *(int *)(param_1 + 0x24) || (param_2 != 0)); param_2 = param_2 >> 3) {
    *(int *)(param_1 + 0x24) = *(int *)(param_1 + 0x24) + -1;
    *pfVar2 = (formatting_buffer)(((byte)param_2 & 7) + 0x30);
    *(int *)(param_1 + 0x30) = *(int *)(param_1 + 0x30) + -1;
    pfVar2 = *(formatting_buffer **)(param_1 + 0x30);
  }
  *(int *)(param_1 + 0x34) = (int)pfVar3 - (int)pfVar2;
  *(formatting_buffer **)(param_1 + 0x30) = pfVar2 + 1;
  return;
}

