/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 1400987d4 */

ulonglong FUN_1400987d4(byte param_1,longlong *param_2,longlong *param_3)

{
  longlong *plVar1;
  bool bVar2;
  uint uVar3;
  ulonglong uVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined1 auStackY_48 [32];
  
  if (param_2 == (longlong *)0x0) {
    *(undefined1 *)(param_3 + 6) = 1;
    *(undefined4 *)((longlong)param_3 + 0x2c) = 0x16;
    FUN_1400a1080((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0,param_3);
    return 0xffffffff;
  }
  FUN_14008ea30((longlong)param_2);
  if ((*(uint *)((longlong)param_2 + 0x14) >> 0xc & 1) == 0) {
    uVar3 = FUN_1400a5bb4((longlong)param_2);
    if (uVar3 + 2 < 2) {
      puVar6 = &DAT_14013bf10;
    }
    else {
      puVar6 = (undefined *)
               ((&DAT_1401433a0)[(longlong)(int)uVar3 >> 6] + (ulonglong)(uVar3 & 0x3f) * 0x48);
    }
    puVar5 = &DAT_14013bf10;
    if (puVar6[0x39] == '\0') {
      if (1 < uVar3 + 2) {
        puVar5 = (undefined *)
                 ((&DAT_1401433a0)[(longlong)(int)uVar3 >> 6] + (ulonglong)(uVar3 & 0x3f) * 0x48);
      }
      if ((puVar5[0x3d] & 1) == 0) goto LAB_1400988bd;
    }
    bVar2 = false;
  }
  else {
LAB_1400988bd:
    bVar2 = true;
  }
  if (bVar2) {
    plVar1 = param_2 + 2;
    *(int *)plVar1 = (int)*plVar1 + -1;
    if ((int)*plVar1 < 0) {
      uVar4 = FUN_1400abf9c(param_1,param_2,param_3);
      uVar4 = uVar4 & 0xffffffff;
    }
    else {
      *(byte *)*param_2 = param_1;
      *param_2 = *param_2 + 1;
      uVar4 = (ulonglong)param_1;
    }
    FUN_14008ea3c((longlong)param_2);
  }
  else {
    *(undefined1 *)(param_3 + 6) = 1;
    *(undefined4 *)((longlong)param_3 + 0x2c) = 0x16;
    FUN_1400a1080((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0,param_3);
    FUN_1400abf70(auStackY_48,(PVOID)0x1400988fd);
    uVar4 = 0xffffffff;
  }
  return uVar4;
}

