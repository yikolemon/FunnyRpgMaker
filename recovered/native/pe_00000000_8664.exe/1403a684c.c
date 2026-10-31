/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1403a684c */

void FUN_1403a684c(longlong param_1,undefined8 param_2,uint param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  undefined8 uVar5;
  longlong lVar6;
  ulonglong uVar7;
  undefined8 uVar8;
  
  uVar8 = 0xfffffffffffffffe;
  lVar4 = (longlong)*(int *)(param_1 + 8);
  if (*(int *)(param_1 + 8) < (int)param_3) {
    if (*(int *)(param_1 + 0xc) < (int)param_3) {
      uVar5 = FUN_14030fcc8((longlong)(int)param_3 << 5);
      if (*(longlong *)(param_1 + 0x10) != 0) {
        FUN_1404b97c0(uVar5,*(longlong *)(param_1 + 0x10),(longlong)*(int *)(param_1 + 8) << 5);
        FUN_14030fda4(*(undefined8 *)(param_1 + 0x10));
      }
      *(undefined8 *)(param_1 + 0x10) = uVar5;
      *(uint *)(param_1 + 0xc) = param_3;
    }
    *(uint *)(param_1 + 8) = param_3;
  }
  *(uint *)(param_1 + 4) = param_3;
  puVar1 = *(undefined8 **)(param_1 + 0x10);
  puVar1[2] = 0;
  puVar1[3] = 0;
  *puVar1 = 0;
  puVar1[1] = 0;
  if (1 < (int)param_3) {
    uVar7 = 1;
    lVar6 = 0x38;
    do {
      lVar2 = *(longlong *)(param_1 + 0x10);
      puVar1 = (undefined8 *)(lVar2 + -0x18 + lVar6);
      if ((longlong)uVar7 < lVar4) {
        if (*(int *)(lVar2 + -0x14 + lVar6) < 0) {
          uVar5 = FUN_14030fcc8(0);
          lVar3 = *(longlong *)(lVar2 + -0x10 + lVar6);
          if (lVar3 != 0) {
            FUN_1404b97c0(uVar5,lVar3,(longlong)*(int *)(lVar2 + -0x18 + lVar6) * 0x48);
            FUN_14030fda4();
          }
          *(undefined8 *)(lVar2 + -0x10 + lVar6) = uVar5;
          *(undefined4 *)(lVar2 + -0x14 + lVar6) = 0;
        }
        *(undefined4 *)puVar1 = 0;
        lVar2 = *(longlong *)(param_1 + 0x10);
        if (*(int *)(lVar2 + -4 + lVar6) < 0) {
          uVar5 = FUN_14030fcc8(0);
          if (*(longlong *)(lVar2 + lVar6) != 0) {
            FUN_1404b97c0(uVar5,*(longlong *)(lVar2 + lVar6),
                          (longlong)*(int *)(lVar2 + -8 + lVar6) * 2,param_4,lVar4,uVar8);
            FUN_14030fda4();
          }
          *(undefined8 *)(lVar2 + lVar6) = uVar5;
          *(undefined4 *)(lVar2 + -4 + lVar6) = 0;
        }
        *(undefined4 *)(lVar2 + -8 + lVar6) = 0;
      }
      else {
        puVar1[2] = 0;
        puVar1[3] = 0;
        *puVar1 = 0;
        puVar1[1] = 0;
      }
      uVar7 = uVar7 + 1;
      lVar6 = lVar6 + 0x20;
    } while (param_3 != uVar7);
  }
  return;
}

