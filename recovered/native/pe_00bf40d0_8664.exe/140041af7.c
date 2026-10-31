/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 140041af7 */

ulonglong FUN_140041af7(longlong param_1,char param_2)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  ushort uVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  ulonglong uVar8;
  undefined1 (*pauVar9) [32];
  undefined4 extraout_var;
  undefined8 uVar10;
  undefined1 auStackY_78 [32];
  uint local_50;
  uint local_4c;
  ulonglong local_48;
  
  local_48 = DAT_14012ea80 ^ (ulonglong)auStackY_78;
  plVar1 = *(longlong **)(param_1 + 0xa0);
  lVar2 = plVar1[6];
  lVar3 = *(longlong *)(param_1 + 0x408);
  uVar10 = 0x56564152;
  if (param_2 == '\0') {
    uVar10 = 0x48564152;
  }
  *(undefined1 *)(lVar3 + 0x40 + (ulonglong)(param_2 != '\0') * 0x10) = 1;
  uVar8 = (**(code **)(param_1 + 0x2a0))(param_1,uVar10,plVar1,&local_50);
  local_4c = (uint)uVar8;
  if (local_4c == 0) {
    iVar5 = FUN_140020f72((longlong)plVar1);
    uVar4 = FUN_140020aa5(plVar1,&local_4c);
    uVar8 = (ulonglong)local_4c;
    if (local_4c == 0) {
      uVar8 = FUN_140020a93((longlong)plVar1,2);
      local_4c = (uint)uVar8;
      if ((local_4c == 0) && (uVar8 = 8, uVar4 == 1)) {
        uVar6 = FUN_140020e0f(plVar1,&local_4c);
        uVar8 = (ulonglong)local_4c;
        if (local_4c == 0) {
          uVar7 = FUN_140020e0f(plVar1,&local_4c);
          uVar8 = (ulonglong)local_4c;
          if (local_4c == 0) {
            pauVar9 = FUN_14001c423(lVar2,0x38,(int *)&local_4c);
            if (param_2 == '\0') {
              *(undefined1 (**) [32])(lVar3 + 0x48) = pauVar9;
            }
            else {
              *(undefined1 (**) [32])(lVar3 + 0x58) = pauVar9;
            }
            uVar8 = (ulonglong)local_4c;
            if (local_4c == 0) {
              local_4c = FUN_14003ec6f(param_1,uVar6 + iVar5,(uint *)pauVar9);
              uVar8 = CONCAT44(extraout_var,local_4c);
              if (local_4c == 0) {
                if (uVar7 != 0) {
                  uVar8 = FUN_14003ea18(param_1,uVar7 + iVar5,(uint *)(pauVar9 + 1),(uint *)pauVar9,
                                        local_50);
                  if ((int)uVar8 != 0) goto LAB_140041c85;
                }
                uVar6 = 0x10;
                if (param_2 == '\0') {
                  uVar6 = 2;
                }
                *(undefined1 *)(lVar3 + 0x41 + (ulonglong)(param_2 != '\0') * 0x10) = 1;
                *(uint *)(param_1 + 0x410) = *(uint *)(param_1 + 0x410) | uVar6;
                uVar8 = 0;
              }
            }
          }
        }
      }
    }
  }
LAB_140041c85:
  if (DAT_14012ea80 == (local_48 ^ (ulonglong)auStackY_78)) {
    return uVar8;
  }
                    /* WARNING: Subroutine does not return */
  FUN_140086440(local_48 ^ (ulonglong)auStackY_78);
}

