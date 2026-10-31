/* Ghidra pseudocode. Image: pe_00d3d4d0_014c.exe Address: 00489e9f */

undefined4 __fastcall FUN_00489e9f(__uint64 *param_1)

{
  undefined2 uVar1;
  int *piVar2;
  bool bVar3;
  LPWSTR pWVar4;
  undefined2 *puVar5;
  int iVar6;
  undefined4 local_8;
  
  puVar5 = *(undefined2 **)(param_1 + 2);
  *(undefined1 *)(param_1 + 7) = 1;
  *(undefined2 **)(param_1 + 2) = puVar5 + 2;
  uVar1 = *puVar5;
  local_8 = param_1;
  bVar3 = __crt_stdio_output::is_wide_character_specifier<wchar_t>
                    (*param_1,*(wchar_t *)((int)param_1 + 0x2e),*(length_modifier *)(param_1 + 5));
  if (bVar3) {
    puVar5 = *(undefined2 **)(param_1 + 0x88);
    if (*(undefined2 **)(param_1 + 0x88) == (undefined2 *)0x0) {
      puVar5 = (undefined2 *)((int)param_1 + 0x3c);
    }
    *puVar5 = uVar1;
  }
  else {
    piVar2 = *(int **)(param_1 + 1);
    local_8 = (__uint64 *)(CONCAT22(local_8._2_2_,uVar1) & 0xffff00ff);
    if ((char)piVar2[5] == '\0') {
      FUN_00488f30(piVar2);
    }
    pWVar4 = *(LPWSTR *)(param_1 + 0x88);
    if (*(LPWSTR *)(param_1 + 0x88) == (LPWSTR)0x0) {
      pWVar4 = (LPWSTR)((int)param_1 + 0x3c);
    }
    puVar5 = (undefined2 *)FUN_00499356(pWVar4,(byte *)&local_8,*(uint *)(piVar2[3] + 4),piVar2);
    if ((int)puVar5 < 0) {
      *(undefined1 *)((int)param_1 + 0x2c) = 1;
    }
  }
  *(undefined4 *)((int)param_1 + 0x34) = 1;
  iVar6 = (int)param_1[0x88];
  if ((int)param_1[0x88] == 0) {
    iVar6 = (int)param_1 + 0x3c;
  }
  *(int *)(param_1 + 6) = iVar6;
  return CONCAT31((int3)((uint)puVar5 >> 8),1);
}

