/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10263467 */

void __thiscall FUN_10263467(int param_1,uint param_2,uint param_3,byte param_4)

{
  byte bVar1;
  formatting_buffer fVar2;
  uint uVar3;
  int iVar4;
  formatting_buffer *pfVar5;
  formatting_buffer *pfVar6;
  
  pfVar5 = *(formatting_buffer **)(param_1 + 0x440);
  if (*(formatting_buffer **)(param_1 + 0x440) == (formatting_buffer *)0x0) {
    pfVar5 = (formatting_buffer *)(param_1 + 0x3c);
  }
  uVar3 = __crt_stdio_output::formatting_buffer::count<char>((formatting_buffer *)(param_1 + 0x3c));
  pfVar5 = pfVar5 + (uVar3 - 1);
  *(formatting_buffer **)(param_1 + 0x30) = pfVar5;
  pfVar6 = pfVar5;
  do {
    iVar4 = *(int *)(param_1 + 0x24);
    if (iVar4 < 1) {
      if (param_2 == 0 && param_3 == 0) {
        *(int *)(param_1 + 0x34) = (int)pfVar5 - (int)pfVar6;
        *(formatting_buffer **)(param_1 + 0x30) = pfVar6 + 1;
        return;
      }
      iVar4 = *(int *)(param_1 + 0x24);
    }
    *(int *)(param_1 + 0x24) = iVar4 + -1;
    bVar1 = (byte)param_2;
    param_2 = param_2 >> 4 | param_3 << 0x1c;
    fVar2 = (formatting_buffer)((bVar1 & 0xf) + 0x30);
    param_3 = param_3 >> 4;
    if (0x39 < (byte)fVar2) {
      fVar2 = (formatting_buffer)((param_4 ^ 1) * ' ' + '\a' + (char)fVar2);
    }
    *pfVar6 = fVar2;
    *(int *)(param_1 + 0x30) = *(int *)(param_1 + 0x30) + -1;
    pfVar6 = *(formatting_buffer **)(param_1 + 0x30);
  } while( true );
}

