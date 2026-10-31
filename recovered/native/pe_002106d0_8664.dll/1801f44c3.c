/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1801f44c3 */

ulonglong FUN_1801f44c3(longlong param_1,char param_2)

{
  undefined8 uVar1;
  longlong lVar2;
  short sVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  ulonglong uVar7;
  longlong lVar8;
  uint uVar9;
  undefined8 uVar10;
  undefined1 auStack_78 [32];
  undefined4 local_58;
  undefined4 local_50;
  uint local_4c;
  ulonglong local_48;
  
  local_48 = DAT_180402640 ^ (ulonglong)auStack_78;
  lVar8 = *(longlong *)(param_1 + 0xa0);
  uVar1 = *(undefined8 *)(lVar8 + 0x30);
  lVar2 = *(longlong *)(param_1 + 0x408);
  uVar10 = 0x56564152;
  if (param_2 == '\0') {
    uVar10 = 0x48564152;
  }
  *(undefined1 *)(lVar2 + 0x40 + (ulonglong)(param_2 != '\0') * 0x10) = 1;
  uVar7 = (**(code **)(param_1 + 0x2a0))(param_1,uVar10,lVar8,&local_50);
  local_4c = (uint)uVar7;
  if (local_4c == 0) {
    iVar4 = FUN_1801ceb6f(lVar8);
    sVar3 = FUN_1801ce6a2(lVar8,&local_4c);
    uVar7 = (ulonglong)local_4c;
    if (local_4c == 0) {
      uVar7 = FUN_1801ce690(lVar8,2);
      local_4c = (uint)uVar7;
      if ((local_4c == 0) && (uVar7 = 8, sVar3 == 1)) {
        iVar5 = FUN_1801cea0c(lVar8,&local_4c);
        uVar7 = (ulonglong)local_4c;
        if (local_4c == 0) {
          iVar6 = FUN_1801cea0c(lVar8,&local_4c);
          uVar7 = (ulonglong)local_4c;
          if (local_4c == 0) {
            lVar8 = FUN_1801c9a4b(uVar1,0x38,&local_4c);
            if (param_2 == '\0') {
              *(longlong *)(lVar2 + 0x48) = lVar8;
            }
            else {
              *(longlong *)(lVar2 + 0x58) = lVar8;
            }
            uVar7 = (ulonglong)local_4c;
            if (local_4c == 0) {
              uVar7 = FUN_1801f163b(param_1,iVar5 + iVar4,lVar8);
              local_4c = (uint)uVar7;
              if (local_4c == 0) {
                if (iVar6 != 0) {
                  local_58 = local_50;
                  uVar7 = FUN_1801f13e4(param_1,iVar6 + iVar4,lVar8 + 0x20,lVar8);
                  if ((int)uVar7 != 0) goto LAB_1801f4651;
                }
                uVar9 = 0x10;
                if (param_2 == '\0') {
                  uVar9 = 2;
                }
                *(undefined1 *)(lVar2 + 0x41 + (ulonglong)(param_2 != '\0') * 0x10) = 1;
                *(uint *)(param_1 + 0x410) = *(uint *)(param_1 + 0x410) | uVar9;
                uVar7 = 0;
              }
            }
          }
        }
      }
    }
  }
LAB_1801f4651:
  if (DAT_180402640 == (local_48 ^ (ulonglong)auStack_78)) {
    return uVar7;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1802396d0(local_48 ^ (ulonglong)auStack_78);
}

