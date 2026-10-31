/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1011a49b */

void __fastcall FUN_1011a49b(int param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  undefined1 auVar7 [16];
  int local_2c;
  undefined1 local_28 [20];
  uint local_14;
  
  local_14 = DAT_10388d00 ^ (uint)&local_2c;
  local_2c = param_2;
  if (0 < param_3) {
    iVar6 = 0;
    do {
      iVar4 = *(int *)(local_2c + iVar6 * 0x24);
      if (iVar4 != 0) {
        iVar1 = FUN_1011b528(param_1,iVar4);
        if (iVar1 == 0) {
          iVar4 = local_2c + iVar6 * 0x24;
          iVar1 = FUN_1011b94c();
          if (*(int *)(iVar4 + 4) == 0) {
            iVar2 = 0;
          }
          else {
            iVar2 = FUN_1011b528(param_1,*(int *)(iVar4 + 4));
          }
          *(int *)(iVar1 + 0x18) = iVar2;
          auVar7 = pshuflw(ZEXT416(*(uint *)(iVar4 + 0x18)),ZEXT416(*(uint *)(iVar4 + 0x18)),0x60);
          *(ulonglong *)(iVar1 + 0x34) =
               CONCAT44((float)(auVar7._4_4_ >> 0x10),(float)(auVar7._0_4_ >> 0x10));
          auVar7 = pshuflw(ZEXT416(*(uint *)(iVar4 + 0x1c)),ZEXT416(*(uint *)(iVar4 + 0x1c)),0x60);
          *(ulonglong *)(iVar1 + 0x3c) =
               CONCAT44((float)(auVar7._4_4_ >> 0x10),(float)(auVar7._0_4_ >> 0x10));
          auVar7 = pshuflw(ZEXT416(*(uint *)(iVar4 + 0x20)),ZEXT416(*(uint *)(iVar4 + 0x20)),0x60);
          *(ulonglong *)(iVar1 + 0x44) =
               CONCAT44((float)(auVar7._4_4_ >> 0x10),(float)(auVar7._0_4_ >> 0x10));
          *(uint *)(iVar1 + 0xa8) = *(uint *)(iVar1 + 0xa8) & 0xfffffe00 | 0x49;
          if (iVar2 != 0) {
            if (*(int *)(iVar2 + 0x1c) == 0) {
              *(int *)(iVar2 + 0x1c) = iVar1;
            }
            else if (*(int *)(iVar2 + 0x20) == 0) {
              *(int *)(iVar2 + 0x20) = iVar1;
            }
          }
          *(undefined4 *)(iVar1 + 0x9c) = *(undefined4 *)(iVar4 + 0xc);
          *(int *)(iVar1 + 0x4c) = (int)*(char *)(iVar4 + 0x10);
          uVar3 = *(uint *)(iVar4 + 0x14) & 0x3fc20;
          *(uint *)(iVar1 + 8) = uVar3;
          *(uint *)(iVar1 + 0x10) = *(uint *)(iVar1 + 4) | *(uint *)(iVar1 + 0xc) | uVar3;
          iVar4 = iVar1;
          do {
            iVar4 = *(int *)(iVar4 + 0x18);
          } while (iVar4 != 0);
          FUN_1012985e();
          uVar5 = FUN_1010cbda(local_28);
          *(undefined4 *)(iVar1 + 0x78) = uVar5;
        }
        else if ((*(byte *)(param_1 + 0x27b5) & 4) != 0) {
          FUN_100f99e6("[docking] DockContextBuildNodesFromSettings: skip duplicate node 0x%08X\n",
                       iVar4);
        }
      }
      iVar6 = iVar6 + 1;
    } while (iVar6 != param_3);
  }
  if (DAT_10388d00 == (local_14 ^ (uint)&local_2c)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_102283e0();
}

