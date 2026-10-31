/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10263569 */

void __thiscall FUN_10263569(int param_1,uint param_2,uint param_3)

{
  byte bVar1;
  uint uVar2;
  int iVar3;
  formatting_buffer *pfVar4;
  formatting_buffer *pfVar5;
  
  pfVar4 = *(formatting_buffer **)(param_1 + 0x440);
  if (*(formatting_buffer **)(param_1 + 0x440) == (formatting_buffer *)0x0) {
    pfVar4 = (formatting_buffer *)(param_1 + 0x3c);
  }
  uVar2 = __crt_stdio_output::formatting_buffer::count<char>((formatting_buffer *)(param_1 + 0x3c));
  pfVar4 = pfVar4 + (uVar2 - 1);
  *(formatting_buffer **)(param_1 + 0x30) = pfVar4;
  pfVar5 = pfVar4;
  do {
    iVar3 = *(int *)(param_1 + 0x24);
    if (iVar3 < 1) {
      if (param_2 == 0 && param_3 == 0) {
        *(int *)(param_1 + 0x34) = (int)pfVar4 - (int)pfVar5;
        *(formatting_buffer **)(param_1 + 0x30) = pfVar5 + 1;
        return;
      }
      iVar3 = *(int *)(param_1 + 0x24);
    }
    *(int *)(param_1 + 0x24) = iVar3 + -1;
    bVar1 = (byte)param_2;
    param_2 = param_2 >> 3 | param_3 << 0x1d;
    *pfVar5 = (formatting_buffer)((bVar1 & 7) + 0x30);
    param_3 = param_3 >> 3;
    *(int *)(param_1 + 0x30) = *(int *)(param_1 + 0x30) + -1;
    pfVar5 = *(formatting_buffer **)(param_1 + 0x30);
  } while( true );
}

