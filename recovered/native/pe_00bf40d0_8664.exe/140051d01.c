/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 140051d01 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulonglong FUN_140051d01(undefined8 *param_1,longlong *param_2,uint param_3,longlong *param_4,
                       int param_5,int param_6,undefined8 *param_7,longlong param_8)

{
  longlong lVar1;
  longlong lVar2;
  uint uVar3;
  undefined4 uVar4;
  int iVar5;
  ulonglong uVar6;
  undefined8 uVar7;
  uint *puVar8;
  byte *pbVar9;
  bool bVar10;
  undefined1 auStackY_e8 [32];
  uint local_9c;
  byte *local_98;
  undefined8 local_90 [9];
  ulonglong local_48;
  
  local_48 = DAT_14012ea80 ^ (ulonglong)auStackY_e8;
  local_98 = (byte *)0x0;
  lVar1 = *(longlong *)(param_8 + 0x2f8);
  bVar10 = (param_6 - 0x3000U & 0xffffefff) == 0;
  uVar3 = 0x60;
  if (bVar10) {
    uVar3 = 0x201;
  }
  uVar3 = FUN_14004ef09(local_90,param_6,param_1,(longlong *)*param_7,uVar3,0,0);
  if (uVar3 == 0) {
    FUN_1400b3c00((undefined1 (*) [32])(param_1 + 3),0,0x9c);
    *(undefined4 *)(param_1 + 4) = 0x32ff9c;
    param_1[5] = 0x1000000000002;
    *(undefined4 *)(param_1 + 7) = 0x10000;
    *(undefined4 *)(param_1 + 0x13) = 0x2210;
    uVar7 = _UNK_1400f72e8;
    *param_1 = _DAT_1400f72e0;
    param_1[1] = uVar7;
    param_1[2] = 0xffff0000ffff;
    *(undefined8 *)((longlong)param_1 + 0x7c) = 0xffff0000ffff;
    uVar4 = 0x30;
    if (bVar10) {
      uVar4 = 0x201;
    }
    *(undefined4 *)((longlong)param_1 + 0x84) = 0xffff;
    *(undefined4 *)(param_1 + 0x15) = 0xffff;
    *(undefined4 *)((longlong)param_1 + 0xb4) = uVar4;
    if ((int)param_2[2] == 0) {
      uVar7 = FUN_140020a41((longlong)param_4,*(uint *)(param_2 + 3));
      uVar3 = (uint)uVar7;
      if ((uVar3 == 0) &&
         (uVar3 = FUN_140021039(param_4,*(uint *)((longlong)param_2 + 0x1c),(longlong *)&local_98),
         uVar3 == 0)) {
        puVar8 = (uint *)((longlong)param_2 + 0x1c);
        goto LAB_140051e7e;
      }
    }
    else {
      puVar8 = &local_9c;
      uVar3 = FUN_140050c74(param_2,param_3,(longlong *)&local_98,puVar8);
      uVar6 = (ulonglong)uVar3;
      if (uVar3 == 0) {
LAB_140051e7e:
        pbVar9 = local_98 + *puVar8;
        if (local_98 == (byte *)0x0) {
          pbVar9 = (byte *)0x0;
        }
        uVar6 = FUN_14004efc4((longlong)local_90,local_98,pbVar9);
        uVar6 = uVar6 & 0xffffffff;
      }
      if ((int)param_2[2] == 0) {
        FUN_14002115a((longlong)param_4,(longlong *)&local_98);
      }
      else {
        FUN_140050c64(param_2,(longlong *)&local_98);
      }
      if ((int)uVar6 != 0) goto LAB_140051d9b;
      if (*(int *)(param_1 + 0x10) != 0xffff) {
LAB_140052039:
        uVar6 = 0;
        goto LAB_140051d9b;
      }
      uVar6 = FUN_14004e9e6(param_7,(longlong)param_1,0,0);
      uVar3 = (uint)uVar6;
      if (uVar3 == 0) {
        if ((param_6 != 0x3000) && (param_6 != 0x4000)) {
          iVar5 = *(int *)(*(longlong *)(param_8 + 0xd0) + 0x5c);
          if (iVar5 == -1) {
            lVar2 = *(longlong *)(param_8 + 0x90);
            iVar5 = *(int *)(lVar2 + 0x60);
            *(int *)(param_1 + 0x58) = iVar5;
            if (iVar5 != 0) {
              do {
                iVar5 = (**(code **)(lVar1 + 0x28))(iVar5);
                *(int *)(lVar2 + 0x60) = iVar5;
              } while (iVar5 < 0);
            }
          }
          else {
            *(int *)(param_1 + 0x58) = iVar5;
            if (*(int *)(*(longlong *)(param_8 + 0xd0) + 0x5c) != 0) {
              do {
                uVar4 = (**(code **)(lVar1 + 0x28))();
                *(undefined4 *)(*(longlong *)(param_8 + 0xd0) + 0x5c) = uVar4;
              } while (*(int *)(*(longlong *)(param_8 + 0xd0) + 0x5c) < 0);
            }
          }
          if (*(int *)(param_1 + 0x58) == 0) {
            *(undefined4 *)(param_1 + 0x58) = *(undefined4 *)(param_1 + 0x42);
          }
        }
        if (*(int *)((longlong)param_1 + 0x214) == 0) goto LAB_140052039;
        uVar7 = FUN_140020a41((longlong)param_4,
                              *(int *)((longlong)param_1 + 0x214) + param_5 +
                              *(int *)(param_1 + 0xe));
        uVar3 = (uint)uVar7;
        if (uVar3 == 0) {
          uVar3 = FUN_140051954(param_1 + 0x51,param_4,'\x01',bVar10);
          if (uVar3 == 0) {
            uVar3 = FUN_140051af0(param_1 + 0x51,param_1 + 0x57,(undefined8 *)0x0,(uint *)0x0);
          }
        }
      }
    }
  }
  uVar6 = (ulonglong)uVar3;
LAB_140051d9b:
  FUN_14004f2a2(local_90);
  if (DAT_14012ea80 != (local_48 ^ (ulonglong)auStackY_e8)) {
                    /* WARNING: Subroutine does not return */
    FUN_140086440(local_48 ^ (ulonglong)auStackY_e8);
  }
  return uVar6;
}

