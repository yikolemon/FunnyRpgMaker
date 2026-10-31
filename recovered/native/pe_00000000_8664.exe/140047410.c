/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 140047410 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140047410(longlong param_1,int *param_2,undefined4 *param_3,longlong *param_4)

{
  longlong lVar1;
  int iVar2;
  UINT UVar3;
  UINT UVar4;
  longlong lVar5;
  LPWSTR **lpszFile;
  uint iFile;
  undefined4 local_e8;
  undefined4 uStack_e4;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined1 local_c0 [32];
  STGMEDIUM local_a0;
  LPWSTR *local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  ulonglong uStack_70;
  undefined8 local_60;
  
  local_60 = 0xfffffffffffffffe;
  lVar5 = FUN_1400799b5();
  if (lVar5 != 0) {
    iVar2 = *param_2;
    lVar5 = FUN_140081200();
    *(float *)(lVar5 + 0xe8) = (float)iVar2;
    iVar2 = param_2[1];
    lVar5 = FUN_140081200();
    *(float *)(lVar5 + 0xec) = (float)iVar2;
  }
  if (((((float)*param_2 < *(float *)(param_1 + 0x14)) ||
       (*(float *)(param_1 + 0x1c) < (float)*param_2)) ||
      ((float)param_2[1] < *(float *)(param_1 + 0x18))) ||
     (*(float *)(param_1 + 0x20) < (float)param_2[1])) {
    *param_3 = 0;
  }
  else {
    *param_3 = 1;
    if (param_4 != (longlong *)0x0) {
      lVar5 = *(longlong *)(param_1 + 0x28);
      lVar1 = *(longlong *)(param_1 + 0x30);
      if (lVar5 != lVar1) {
        do {
          FUN_14000109c(lVar5);
          lVar5 = lVar5 + 0x20;
        } while (lVar5 != lVar1);
        *(undefined8 *)(param_1 + 0x30) = *(undefined8 *)(param_1 + 0x28);
      }
      local_d8 = _DAT_1401c83d0;
      uStack_d0 = _UNK_1401c83d8;
      local_e8 = _DAT_1401c83c0;
      uStack_e4 = _UNK_1401c83c4;
      uStack_e0 = _UNK_1401c83c8;
      uStack_dc = _UNK_1401c83cc;
      iVar2 = (**(code **)(*param_4 + 0x18))(param_4,&local_e8,&local_a0);
      if (-1 < iVar2) {
        if (local_a0.u.hBitmap != (HBITMAP)0x0) {
          UVar3 = DragQueryFileW((HDROP)local_a0.u.hBitmap,0xffffffff,(LPWSTR)0x0,0);
          for (iFile = 0; iFile < UVar3; iFile = iFile + 1) {
            UVar4 = DragQueryFileW((HDROP)local_a0.u.hBitmap,iFile,(LPWSTR)0x0,0);
            if (UVar4 != 0) {
              local_78 = 0;
              uStack_70 = 0;
              local_88 = (LPWSTR *)0x0;
              uStack_80 = 0;
              FUN_140047692(&local_88,0,UVar4);
              lpszFile = &local_88;
              if (7 < uStack_70) {
                lpszFile = (LPWSTR **)local_88;
              }
              DragQueryFileW((HDROP)local_a0.u.hBitmap,iFile,(LPWSTR)lpszFile,UVar4 + 1);
              FUN_1400562c1(local_c0,&local_88);
              FUN_14004777e(param_1 + 0x28,local_c0);
              FUN_14000109c(local_c0);
              FUN_140001e90(&local_88);
            }
          }
        }
        ReleaseStgMedium(&local_a0);
      }
    }
  }
  return;
}

