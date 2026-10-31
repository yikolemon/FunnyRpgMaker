/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 101120d9 */

void FUN_101120d9(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  
  iVar2 = DAT_1039d74c;
  *(int *)(DAT_1039d74c + 0x204c) = param_1;
  iVar4 = *(int *)(iVar2 + 0x206c);
  if (iVar4 < 0) {
    uVar3 = FUN_100fa1fa(0);
    if (*(int *)(iVar2 + 0x2070) != 0) {
      FUN_1025b2d0(uVar3,*(int *)(iVar2 + 0x2070),*(int *)(iVar2 + 0x2068) << 3);
      FUN_100fa2cb(*(undefined4 *)(iVar2 + 0x2070));
    }
    *(undefined4 *)(iVar2 + 0x2070) = uVar3;
    *(undefined4 *)(iVar2 + 0x206c) = 0;
    iVar4 = 0;
  }
  *(undefined4 *)(iVar2 + 0x2068) = 0;
  if (param_1 != 0) {
    if (param_1 == *(int *)(iVar2 + 0x1e3c)) {
      if (*(int *)(iVar2 + 0x1f98) < 1) {
        iVar4 = 0;
      }
      else {
        uVar8 = *(int *)(iVar2 + 0x1f98) + 1;
        iVar4 = 0;
        do {
          iVar6 = *(int *)(iVar2 + 0x1fa0);
          if (*(int *)(iVar6 + -0xc + uVar8 * 8) != *(int *)(*(int *)(iVar2 + 0x14cc) + 8)) break;
          if (iVar4 == *(int *)(iVar2 + 0x206c)) {
            if (iVar4 == 0) {
              iVar5 = 8;
            }
            else {
              iVar5 = iVar4 / 2 + iVar4;
            }
            iVar7 = iVar4 + 1;
            if (iVar4 + 1 < iVar5) {
              iVar7 = iVar5;
            }
            iVar5 = FUN_100fa1fa(iVar7 * 8);
            if (*(int *)(iVar2 + 0x2070) != 0) {
              FUN_1025b2d0(iVar5,*(int *)(iVar2 + 0x2070),*(int *)(iVar2 + 0x2068) << 3);
              FUN_100fa2cb(*(undefined4 *)(iVar2 + 0x2070));
            }
            *(int *)(iVar2 + 0x2070) = iVar5;
            *(int *)(iVar2 + 0x206c) = iVar7;
            iVar4 = *(int *)(iVar2 + 0x2068);
          }
          else {
            iVar5 = *(int *)(iVar2 + 0x2070);
          }
          *(undefined8 *)(iVar5 + iVar4 * 8) = *(undefined8 *)(iVar6 + -0x10 + uVar8 * 8);
          iVar4 = *(int *)(iVar2 + 0x2068) + 1;
          *(int *)(iVar2 + 0x2068) = iVar4;
          uVar8 = uVar8 - 1;
        } while (1 < uVar8);
      }
    }
    else {
      if (param_1 != *(int *)(*(int *)(iVar2 + 0x2048) + 0x3fc)) {
        return;
      }
      uVar3 = *(undefined4 *)(*(int *)(iVar2 + 0x2048) + 8);
      if (iVar4 == 0) {
        iVar4 = FUN_100fa1fa(0x40);
        if (*(int *)(iVar2 + 0x2070) != 0) {
          FUN_1025b2d0(iVar4,*(int *)(iVar2 + 0x2070),*(int *)(iVar2 + 0x2068) << 3);
          FUN_100fa2cb(*(undefined4 *)(iVar2 + 0x2070));
        }
        *(int *)(iVar2 + 0x2070) = iVar4;
        *(undefined4 *)(iVar2 + 0x206c) = 8;
        iVar6 = *(int *)(iVar2 + 0x2068);
      }
      else {
        iVar4 = *(int *)(iVar2 + 0x2070);
        iVar6 = 0;
      }
      *(undefined4 *)(iVar4 + 4 + iVar6 * 8) = uVar3;
      *(int *)(iVar4 + iVar6 * 8) = param_1;
      iVar4 = *(int *)(iVar2 + 0x2068) + 1;
      *(int *)(iVar2 + 0x2068) = iVar4;
    }
    for (iVar6 = *(int *)(*(int *)(iVar2 + 0x2048) + 0x3bc); iVar6 != 0;
        iVar6 = *(int *)(iVar6 + 0x3bc)) {
      uVar3 = *(undefined4 *)(iVar6 + 0x3fc);
      uVar1 = *(undefined4 *)(iVar6 + 8);
      if (iVar4 == *(int *)(iVar2 + 0x206c)) {
        if (iVar4 == 0) {
          iVar5 = 8;
        }
        else {
          iVar5 = iVar4 / 2 + iVar4;
        }
        iVar7 = iVar4 + 1;
        if (iVar4 + 1 < iVar5) {
          iVar7 = iVar5;
        }
        iVar5 = FUN_100fa1fa(iVar7 * 8);
        if (*(int *)(iVar2 + 0x2070) != 0) {
          FUN_1025b2d0(iVar5,*(int *)(iVar2 + 0x2070),*(int *)(iVar2 + 0x2068) << 3);
          FUN_100fa2cb(*(undefined4 *)(iVar2 + 0x2070));
        }
        *(int *)(iVar2 + 0x2070) = iVar5;
        *(int *)(iVar2 + 0x206c) = iVar7;
        iVar4 = *(int *)(iVar2 + 0x2068);
      }
      else {
        iVar5 = *(int *)(iVar2 + 0x2070);
      }
      *(undefined4 *)(iVar5 + 4 + iVar4 * 8) = uVar1;
      *(undefined4 *)(iVar5 + iVar4 * 8) = uVar3;
      iVar4 = *(int *)(iVar2 + 0x2068) + 1;
      *(int *)(iVar2 + 0x2068) = iVar4;
    }
  }
  return;
}

