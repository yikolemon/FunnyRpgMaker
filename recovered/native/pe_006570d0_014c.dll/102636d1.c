/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 102636d1 */

void __thiscall FUN_102636d1(int param_1,uint param_2,byte param_3)

{
  uint uVar1;
  formatting_buffer *pfVar2;
  formatting_buffer fVar3;
  formatting_buffer *pfVar4;
  
  pfVar4 = *(formatting_buffer **)(param_1 + 0x440);
  if (*(formatting_buffer **)(param_1 + 0x440) == (formatting_buffer *)0x0) {
    pfVar4 = (formatting_buffer *)(param_1 + 0x3c);
  }
  uVar1 = __crt_stdio_output::formatting_buffer::count<char>((formatting_buffer *)(param_1 + 0x3c));
  pfVar4 = pfVar4 + (uVar1 - 1);
  *(formatting_buffer **)(param_1 + 0x30) = pfVar4;
  pfVar2 = pfVar4;
  while ((0 < *(int *)(param_1 + 0x24) || (param_2 != 0))) {
    *(int *)(param_1 + 0x24) = *(int *)(param_1 + 0x24) + -1;
    fVar3 = (formatting_buffer)((char)(param_2 % 10) + '0');
    if (0x39 < (byte)fVar3) {
      fVar3 = (formatting_buffer)((char)fVar3 + (param_3 ^ 1) * ' ' + '\a');
    }
    *pfVar2 = fVar3;
    *(int *)(param_1 + 0x30) = *(int *)(param_1 + 0x30) + -1;
    pfVar2 = *(formatting_buffer **)(param_1 + 0x30);
    param_2 = param_2 / 10;
  }
  *(int *)(param_1 + 0x34) = (int)pfVar4 - (int)pfVar2;
  *(formatting_buffer **)(param_1 + 0x30) = pfVar2 + 1;
  return;
}

