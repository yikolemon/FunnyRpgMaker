/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1026363f */

void __thiscall FUN_1026363f(int param_1,undefined4 param_2,undefined4 param_3,byte param_4)

{
  uint uVar1;
  char extraout_CL;
  formatting_buffer fVar2;
  formatting_buffer *pfVar3;
  formatting_buffer *pfVar4;
  longlong lVar5;
  
  lVar5 = CONCAT44(param_3,param_2);
  pfVar4 = *(formatting_buffer **)(param_1 + 0x440);
  if (*(formatting_buffer **)(param_1 + 0x440) == (formatting_buffer *)0x0) {
    pfVar4 = (formatting_buffer *)(param_1 + 0x3c);
  }
  uVar1 = __crt_stdio_output::formatting_buffer::count<char>((formatting_buffer *)(param_1 + 0x3c));
  pfVar4 = pfVar4 + (uVar1 - 1);
  *(formatting_buffer **)(param_1 + 0x30) = pfVar4;
  pfVar3 = pfVar4;
  while ((0 < *(int *)(param_1 + 0x24) || (lVar5 != 0))) {
    *(int *)(param_1 + 0x24) = *(int *)(param_1 + 0x24) + -1;
    lVar5 = __aulldvrm(lVar5,10,0);
    fVar2 = (formatting_buffer)(extraout_CL + '0');
    if ('9' < (char)fVar2) {
      fVar2 = (formatting_buffer)((char)fVar2 + (param_4 ^ 1) * ' ' + '\a');
    }
    *pfVar3 = fVar2;
    *(int *)(param_1 + 0x30) = *(int *)(param_1 + 0x30) + -1;
    pfVar3 = *(formatting_buffer **)(param_1 + 0x30);
  }
  *(int *)(param_1 + 0x34) = (int)pfVar4 - (int)pfVar3;
  *(formatting_buffer **)(param_1 + 0x30) = pfVar3 + 1;
  return;
}

