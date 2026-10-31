/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1025fc07 */

undefined4 __fastcall FUN_1025fc07(__uint64 *param_1)

{
  formatting_buffer *this;
  undefined2 uVar1;
  bool bVar2;
  uint uVar3;
  int iVar4;
  formatting_buffer *pfVar5;
  formatting_buffer *pfVar6;
  
  this = (formatting_buffer *)((int)param_1 + 0x3c);
  bVar2 = __crt_stdio_output::is_wide_character_specifier<char>
                    (*param_1,*(char *)((int)param_1 + 0x2d),*(length_modifier *)(param_1 + 5));
  pfVar5 = *(formatting_buffer **)(param_1 + 2);
  if (bVar2) {
    *(formatting_buffer **)(param_1 + 2) = pfVar5 + 4;
    uVar1 = *(undefined2 *)pfVar5;
    uVar3 = __crt_stdio_output::formatting_buffer::count<char>(this);
    pfVar5 = *(formatting_buffer **)(param_1 + 0x88);
    if (*(formatting_buffer **)(param_1 + 0x88) == (formatting_buffer *)0x0) {
      pfVar5 = this;
    }
    iVar4 = FUN_10277f74((int)param_1 + 0x34,pfVar5,uVar3,uVar1,(int)param_1[1]);
    if (iVar4 != 0) {
      *(undefined1 *)((int)param_1 + 0x2c) = 1;
    }
  }
  else {
    *(formatting_buffer **)(param_1 + 2) = pfVar5 + 4;
    pfVar6 = *(formatting_buffer **)(param_1 + 0x88);
    if (*(formatting_buffer **)(param_1 + 0x88) == (formatting_buffer *)0x0) {
      pfVar6 = this;
    }
    *pfVar6 = *pfVar5;
    *(undefined4 *)((int)param_1 + 0x34) = 1;
  }
  pfVar5 = *(formatting_buffer **)(param_1 + 0x88);
  if (*(formatting_buffer **)(param_1 + 0x88) == (formatting_buffer *)0x0) {
    pfVar5 = this;
  }
  *(formatting_buffer **)(param_1 + 6) = pfVar5;
  return 1;
}

