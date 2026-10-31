/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 102634ed */

void __thiscall FUN_102634ed(int param_1,uint param_2,byte param_3)

{
  byte bVar1;
  formatting_buffer fVar2;
  uint uVar3;
  formatting_buffer *pfVar4;
  formatting_buffer *pfVar5;
  
  pfVar5 = *(formatting_buffer **)(param_1 + 0x440);
  if (*(formatting_buffer **)(param_1 + 0x440) == (formatting_buffer *)0x0) {
    pfVar5 = (formatting_buffer *)(param_1 + 0x3c);
  }
  uVar3 = __crt_stdio_output::formatting_buffer::count<char>((formatting_buffer *)(param_1 + 0x3c));
  pfVar5 = pfVar5 + (uVar3 - 1);
  *(formatting_buffer **)(param_1 + 0x30) = pfVar5;
  pfVar4 = pfVar5;
  while ((0 < *(int *)(param_1 + 0x24) || (param_2 != 0))) {
    *(int *)(param_1 + 0x24) = *(int *)(param_1 + 0x24) + -1;
    bVar1 = (byte)param_2;
    param_2 = param_2 >> 4;
    fVar2 = (formatting_buffer)((bVar1 & 0xf) + 0x30);
    if (0x39 < (byte)fVar2) {
      fVar2 = (formatting_buffer)((param_3 ^ 1) * ' ' + '\a' + (char)fVar2);
    }
    *pfVar4 = fVar2;
    *(int *)(param_1 + 0x30) = *(int *)(param_1 + 0x30) + -1;
    pfVar4 = *(formatting_buffer **)(param_1 + 0x30);
  }
  *(int *)(param_1 + 0x34) = (int)pfVar5 - (int)pfVar4;
  *(formatting_buffer **)(param_1 + 0x30) = pfVar4 + 1;
  return;
}

