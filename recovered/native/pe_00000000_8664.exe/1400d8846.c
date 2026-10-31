/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1400d8846 */

undefined8 FUN_1400d8846(HMONITOR param_1)

{
  int *piVar1;
  undefined8 *puVar2;
  BOOL BVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  int iVar7;
  int iVar8;
  undefined1 auStack_a8 [32];
  float local_88;
  float fStack_84;
  float fStack_80;
  float fStack_7c;
  float local_78;
  float fStack_74;
  float fStack_70;
  float fStack_6c;
  float local_68;
  undefined4 uStack_64;
  HMONITOR pHStack_60;
  tagMONITORINFO local_50;
  ulonglong local_28;
  
  local_28 = DAT_140f17b40 ^ (ulonglong)auStack_a8;
  local_50.rcWork.left = 0;
  local_50.rcWork.top = 0;
  local_50.rcWork.right = 0;
  local_50.rcWork.bottom = 0;
  local_50.rcMonitor.left = 0;
  local_50.rcMonitor.top = 0;
  local_50.rcMonitor.right = 0;
  local_50.rcMonitor.bottom = 0;
  local_50.dwFlags = 0;
  local_50.cbSize = 0x28;
  BVar3 = GetMonitorInfoW(param_1,&local_50);
  if (BVar3 != 0) {
    local_88 = (float)local_50.rcMonitor.left;
    fStack_84 = (float)local_50.rcMonitor.top;
    fStack_80 = (float)(local_50.rcMonitor.right - local_50.rcMonitor.left);
    fStack_7c = (float)(local_50.rcMonitor.bottom - local_50.rcMonitor.top);
    local_78 = (float)local_50.rcWork.left;
    fStack_74 = (float)local_50.rcWork.top;
    fStack_70 = (float)(local_50.rcWork.right - local_50.rcWork.left);
    fStack_6c = (float)(local_50.rcWork.bottom - local_50.rcWork.top);
    local_68 = (float)FUN_1400d7995(param_1);
    pHStack_60 = param_1;
    if (0.0 < local_68) {
      lVar5 = FUN_140081211();
      piVar1 = (int *)(lVar5 + 0x130);
      if ((local_50.dwFlags & 1) == 0) {
        iVar4 = *(int *)(lVar5 + 0x130);
        if (iVar4 == *(int *)(lVar5 + 0x134)) {
          if (iVar4 == 0) {
            iVar7 = 8;
          }
          else {
            iVar7 = iVar4 / 2 + iVar4;
          }
          iVar8 = iVar4 + 1;
          if (iVar4 + 1 < iVar7) {
            iVar8 = iVar7;
          }
          lVar6 = FUN_140077ab4((longlong)iVar8 * 0x30);
          if (*(longlong *)(lVar5 + 0x138) != 0) {
            FUN_1401c5180(lVar6,*(longlong *)(lVar5 + 0x138),
                          (longlong)*(int *)(lVar5 + 0x130) * 0x30);
            FUN_140077b90(*(undefined8 *)(lVar5 + 0x138));
          }
          *(longlong *)(lVar5 + 0x138) = lVar6;
          *(int *)(lVar5 + 0x134) = iVar8;
          iVar4 = *(int *)(lVar5 + 0x130);
        }
        else {
          lVar6 = *(longlong *)(lVar5 + 0x138);
        }
        lVar5 = (longlong)iVar4 * 0x30;
        puVar2 = (undefined8 *)(lVar6 + 0x20 + lVar5);
        *puVar2 = CONCAT44(uStack_64,local_68);
        puVar2[1] = pHStack_60;
        puVar2 = (undefined8 *)(lVar6 + 0x10 + lVar5);
        *puVar2 = CONCAT44(fStack_74,local_78);
        puVar2[1] = CONCAT44(fStack_6c,fStack_70);
        *(undefined8 *)(lVar6 + lVar5) = CONCAT44(fStack_84,local_88);
        ((undefined8 *)(lVar6 + lVar5))[1] = CONCAT44(fStack_7c,fStack_80);
        *piVar1 = *piVar1 + 1;
      }
      else {
        FUN_1400d89fe(piVar1,&local_88);
      }
    }
  }
  if (DAT_140f17b40 == (local_28 ^ (ulonglong)auStack_a8)) {
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_140188a00(local_28 ^ (ulonglong)auStack_a8);
}

