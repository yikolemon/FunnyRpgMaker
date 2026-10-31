/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 14006a57e */

int FUN_14006a57e(longlong param_1,longlong param_2,uint param_3,undefined *param_4,
                 undefined *param_5,undefined8 param_6)

{
  int iVar1;
  int *piVar2;
  byte *pbVar3;
  ulonglong uVar4;
  longlong lVar5;
  undefined1 *puVar6;
  uint uVar7;
  undefined1 auStackY_108 [32];
  int local_ac;
  int local_a8 [12];
  int local_78 [12];
  ulonglong local_48;
  
  local_48 = DAT_14012ea80 ^ (ulonglong)auStackY_108;
  local_78[8] = 0;
  local_78[9] = 0;
  local_78[4] = 0;
  local_78[5] = 0;
  local_78[6] = 0;
  local_78[7] = 0;
  local_78[0] = 0;
  local_78[1] = 0;
  local_78[2] = 0;
  local_78[3] = 0;
  *(undefined4 *)(param_2 + 0x18) = 0;
  piVar2 = (int *)FUN_14001f231(param_1,8,0,param_3 + 10,0,&local_ac);
  *(int **)(param_2 + 0x20) = piVar2;
  iVar1 = local_ac;
  if (local_ac == 0) {
    if (param_3 != 0) {
      uVar7 = 0;
      do {
        pbVar3 = (byte *)(*(code *)param_4)(param_6,uVar7);
        if ((pbVar3 != (byte *)0x0) && (*pbVar3 != 0)) {
          FUN_14006aa4c((char *)pbVar3,uVar7,(longlong)local_a8,(longlong)local_78);
          uVar4 = FUN_14006a458(pbVar3);
          if ((uVar4 & 0x7fffffff) != 0) {
            FUN_14006aab9((int)uVar4,(longlong)local_78);
            *piVar2 = (int)uVar4;
            piVar2[1] = uVar7;
            piVar2 = piVar2 + 2;
          }
          if (param_5 != (undefined *)0x0) {
            (*(code *)param_5)(param_6,pbVar3);
          }
        }
        uVar7 = uVar7 + 1;
      } while (param_3 != uVar7);
    }
    lVar5 = 0;
    do {
      if (*(int *)((longlong)local_78 + lVar5) == 1) {
        *piVar2 = *(int *)((longlong)&DAT_140109510 + lVar5);
        piVar2[1] = *(int *)((longlong)local_a8 + lVar5);
        piVar2 = piVar2 + 2;
      }
      lVar5 = lVar5 + 4;
    } while (lVar5 != 0x28);
    puVar6 = *(undefined1 **)(param_2 + 0x20);
    uVar4 = (ulonglong)((longlong)piVar2 - (longlong)puVar6) >> 3;
    uVar7 = (uint)uVar4;
    if (uVar7 == 0) {
      FUN_14001c53d(param_1,(longlong)puVar6);
      *(undefined8 *)(param_2 + 0x20) = 0;
      iVar1 = 0xa3;
      if (local_ac != 0) {
        iVar1 = local_ac;
      }
    }
    else {
      if (uVar7 < param_3 >> 1) {
        puVar6 = (undefined1 *)
                 FUN_14001f231(param_1,8,param_3 + 10,uVar7,(longlong)puVar6,&local_ac);
        *(undefined1 **)(param_2 + 0x20) = puVar6;
        local_ac = 0;
      }
      FUN_14009aaf0(puVar6,uVar4 & 0xffffffff,8,&LAB_14006aadb);
      iVar1 = local_ac;
    }
    *(uint *)(param_2 + 0x18) = uVar7;
  }
  if (DAT_14012ea80 != (local_48 ^ (ulonglong)auStackY_108)) {
                    /* WARNING: Subroutine does not return */
    FUN_140086440(local_48 ^ (ulonglong)auStackY_108);
  }
  return iVar1;
}

