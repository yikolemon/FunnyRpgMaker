/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 18011f69a */

void FUN_18011f69a(longlong param_1,longlong param_2,uint param_3)

{
  int iVar1;
  uint uVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  undefined8 uVar6;
  ulonglong uVar7;
  undefined1 auVar8 [16];
  undefined1 auStack_88 [32];
  undefined1 local_68 [32];
  ulonglong local_48;
  
  local_48 = DAT_180402640 ^ (ulonglong)auStack_88;
  if (0 < (int)param_3) {
    uVar7 = 0;
    do {
      iVar1 = *(int *)(param_2 + uVar7 * 0x24);
      if (iVar1 != 0) {
        lVar3 = FUN_180120868(param_1,iVar1);
        if (lVar3 == 0) {
          lVar3 = param_2 + uVar7 * 0x24;
          lVar4 = FUN_180120d7d(param_1,iVar1);
          if (*(int *)(lVar3 + 4) == 0) {
            lVar5 = 0;
          }
          else {
            lVar5 = FUN_180120868(param_1);
          }
          *(longlong *)(lVar4 + 0x18) = lVar5;
          auVar8 = pshuflw(ZEXT416(*(uint *)(lVar3 + 0x18)),ZEXT416(*(uint *)(lVar3 + 0x18)),0x60);
          *(ulonglong *)(lVar4 + 0x48) =
               CONCAT44((float)(auVar8._4_4_ >> 0x10),(float)(auVar8._0_4_ >> 0x10));
          auVar8 = pshuflw(ZEXT416(*(uint *)(lVar3 + 0x1c)),ZEXT416(*(uint *)(lVar3 + 0x1c)),0x60);
          *(ulonglong *)(lVar4 + 0x50) =
               CONCAT44((float)(auVar8._4_4_ >> 0x10),(float)(auVar8._0_4_ >> 0x10));
          auVar8 = pshuflw(ZEXT416(*(uint *)(lVar3 + 0x20)),ZEXT416(*(uint *)(lVar3 + 0x20)),0x60);
          *(ulonglong *)(lVar4 + 0x58) =
               CONCAT44((float)(auVar8._4_4_ >> 0x10),(float)(auVar8._0_4_ >> 0x10));
          *(uint *)(lVar4 + 0xd0) = *(uint *)(lVar4 + 0xd0) & 0xfffffe00 | 0x49;
          if (lVar5 != 0) {
            if (*(longlong *)(lVar5 + 0x20) == 0) {
              *(longlong *)(lVar5 + 0x20) = lVar4;
            }
            else if (*(longlong *)(lVar5 + 0x28) == 0) {
              *(longlong *)(lVar5 + 0x28) = lVar4;
            }
          }
          *(undefined4 *)(lVar4 + 0xc4) = *(undefined4 *)(lVar3 + 0xc);
          *(int *)(lVar4 + 0x60) = (int)*(char *)(lVar3 + 0x10);
          uVar2 = *(uint *)(lVar3 + 0x14) & 0x3fc20;
          *(uint *)(lVar4 + 8) = uVar2;
          *(uint *)(lVar4 + 0x10) = *(uint *)(lVar4 + 4) | *(uint *)(lVar4 + 0xc) | uVar2;
          lVar3 = lVar4;
          do {
            lVar5 = lVar3;
            lVar3 = *(longlong *)(lVar5 + 0x18);
          } while (lVar3 != 0);
          FUN_18012f979(lVar5,local_68);
          uVar6 = FUN_1801118f0(local_68);
          *(undefined8 *)(lVar4 + 0x90) = uVar6;
        }
        else if ((*(byte *)(param_1 + 0x2acd) & 4) != 0) {
          FUN_1800fdfea("[docking] DockContextBuildNodesFromSettings: skip duplicate node 0x%08X\n",
                        iVar1);
        }
      }
      uVar7 = uVar7 + 1;
    } while (uVar7 != param_3);
  }
  if (DAT_180402640 == (local_48 ^ (ulonglong)auStack_88)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1802396d0(local_48 ^ (ulonglong)auStack_88);
}

