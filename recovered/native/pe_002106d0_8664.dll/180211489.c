/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 180211489 */

void FUN_180211489(undefined8 *param_1)

{
  undefined8 uVar1;
  longlong lVar2;
  undefined8 *puVar3;
  uint uVar4;
  ulonglong uVar5;
  
  if (param_1 != (undefined8 *)0x0) {
    uVar1 = param_1[0x10];
    FUN_1801c9b65(uVar1,*param_1);
    *param_1 = 0;
    if (param_1[0xe] != 0) {
      FUN_1801ca18d(param_1[0xe],uVar1);
      FUN_1801c9b65(uVar1,param_1[0xe]);
      param_1[0xe] = 0;
    }
    FUN_1801c9b65(uVar1,param_1[0xc]);
    param_1[0xc] = 0;
    uVar4 = *(uint *)(param_1 + 10);
    if (uVar4 != 0) {
      lVar2 = 0x10;
      uVar5 = 0;
      do {
        if (*(int *)(param_1[0xb] + -8 + lVar2) == 1) {
          FUN_1801c9b65(uVar1,*(undefined8 *)(param_1[0xb] + lVar2));
          *(undefined8 *)(param_1[0xb] + lVar2) = 0;
          uVar4 = *(uint *)(param_1 + 10);
        }
        uVar5 = uVar5 + 1;
        lVar2 = lVar2 + 0x18;
      } while (uVar5 < uVar4);
    }
    FUN_1801c9b65(uVar1,param_1[0xb]);
    param_1[0xb] = 0;
    if (*(int *)((longlong)param_1 + 0x34) != 0) {
      puVar3 = (undefined8 *)param_1[7];
      uVar4 = 0;
      do {
        FUN_1801c9b65(uVar1,*puVar3);
        *puVar3 = 0;
        FUN_1801c9b65(uVar1,puVar3[4]);
        puVar3[4] = 0;
        uVar4 = uVar4 + 1;
        puVar3 = puVar3 + 6;
      } while (uVar4 < *(uint *)((longlong)param_1 + 0x34));
    }
    if (*(int *)((longlong)param_1 + 0x44) != 0) {
      puVar3 = (undefined8 *)param_1[9];
      uVar4 = 0;
      do {
        FUN_1801c9b65(uVar1,*puVar3);
        *puVar3 = 0;
        FUN_1801c9b65(uVar1,puVar3[4]);
        puVar3[4] = 0;
        uVar4 = uVar4 + 1;
        puVar3 = puVar3 + 6;
      } while (uVar4 < *(uint *)((longlong)param_1 + 0x44));
    }
    FUN_1801c9b65(uVar1,param_1[7]);
    uVar4 = 0;
    param_1[7] = 0;
    FUN_1801c9b65(uVar1,param_1[9]);
    param_1[9] = 0;
    FUN_1801ca18d(param_1 + 0x13,uVar1);
    puVar3 = (undefined8 *)param_1[0x11];
    if (*(int *)(param_1 + 0x12) != 0) {
      do {
        FUN_1801c9b65(uVar1,*puVar3);
        *puVar3 = 0;
        uVar4 = uVar4 + 1;
        puVar3 = puVar3 + 3;
      } while (uVar4 < *(uint *)(param_1 + 0x12));
      puVar3 = (undefined8 *)param_1[0x11];
    }
    FUN_1801c9b65(uVar1,puVar3);
    param_1[0x11] = 0;
  }
  return;
}

