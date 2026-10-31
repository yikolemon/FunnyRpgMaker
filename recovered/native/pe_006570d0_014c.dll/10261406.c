/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10261406 */

undefined4 __fastcall FUN_10261406(__uint64 *param_1)

{
  undefined2 uVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  undefined2 *puVar5;
  undefined4 local_8;
  
  puVar5 = *(undefined2 **)(param_1 + 2);
  *(undefined1 *)(param_1 + 7) = 1;
  *(undefined2 **)(param_1 + 2) = puVar5 + 2;
  uVar1 = *puVar5;
  local_8 = param_1;
  bVar2 = __crt_stdio_output::is_wide_character_specifier<wchar_t>
                    (*param_1,*(wchar_t *)((int)param_1 + 0x2e),*(length_modifier *)(param_1 + 5));
  if (bVar2) {
    puVar5 = *(undefined2 **)(param_1 + 0x88);
    if (*(undefined2 **)(param_1 + 0x88) == (undefined2 *)0x0) {
      puVar5 = (undefined2 *)((int)param_1 + 0x3c);
    }
    *puVar5 = uVar1;
  }
  else {
    iVar4 = (int)param_1[1];
    local_8 = (__uint64 *)(CONCAT22(local_8._2_2_,uVar1) & 0xffff00ff);
    if (*(char *)(iVar4 + 0x14) == '\0') {
      FUN_1025ec50();
    }
    iVar3 = (int)param_1[0x88];
    if ((int)param_1[0x88] == 0) {
      iVar3 = (int)param_1 + 0x3c;
    }
    iVar4 = FUN_10278147(iVar3,&local_8,*(undefined4 *)(*(int *)(iVar4 + 0xc) + 4),iVar4);
    if (iVar4 < 0) {
      *(undefined1 *)((int)param_1 + 0x2c) = 1;
    }
  }
  *(undefined4 *)((int)param_1 + 0x34) = 1;
  iVar4 = (int)param_1[0x88];
  if ((int)param_1[0x88] == 0) {
    iVar4 = (int)param_1 + 0x3c;
  }
  *(int *)(param_1 + 6) = iVar4;
  return 1;
}

