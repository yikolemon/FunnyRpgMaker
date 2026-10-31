/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 102614ab */

undefined4 __fastcall FUN_102614ab(__uint64 *param_1)

{
  ushort uVar1;
  undefined4 *puVar2;
  ushort *puVar3;
  bool bVar4;
  uint uVar5;
  
  puVar2 = *(undefined4 **)(param_1 + 2);
  *(undefined4 **)(param_1 + 2) = puVar2 + 1;
  puVar3 = (ushort *)*puVar2;
  if ((puVar3 == (ushort *)0x0) || (*(int *)(puVar3 + 2) == 0)) {
    uVar5 = 6;
    *(char **)(param_1 + 6) = "(null)";
  }
  else {
    *(undefined4 *)(param_1 + 6) = *(undefined4 *)(puVar3 + 2);
    uVar1 = *puVar3;
    uVar5 = (uint)uVar1;
    bVar4 = __crt_stdio_output::is_wide_character_specifier<wchar_t>
                      (*param_1,*(wchar_t *)((int)param_1 + 0x2e),*(length_modifier *)(param_1 + 5))
    ;
    if (bVar4) {
      *(undefined1 *)(param_1 + 7) = 1;
      uVar5 = (uint)(uVar1 >> 1);
      goto LAB_10261516;
    }
  }
  *(undefined1 *)(param_1 + 7) = 0;
LAB_10261516:
  *(uint *)((int)param_1 + 0x34) = uVar5;
  return CONCAT31((int3)(uVar5 >> 8),1);
}

