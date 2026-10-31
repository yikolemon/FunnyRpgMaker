/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 101f0468 */

int __fastcall FUN_101f0468(int param_1,int param_2,undefined4 *param_3,undefined1 *param_4)

{
  int iVar1;
  int *piVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int iVar6;
  int local_538;
  int local_534;
  int local_530;
  int aiStack_52c [3];
  int iStack_520;
  undefined1 auStack_2a4 [536];
  int *piStack_8c;
  uint local_14;
  
  local_14 = DAT_10388d00 ^ (uint)&local_538;
  iVar1 = *(int *)(param_1 + 4);
  local_530 = *(int *)(iVar1 + 0x1ec);
  local_538 = *(int *)(local_530 + 0xc);
  piVar2 = *(int **)(*(int *)(iVar1 + 0x80) + 0x34);
  uVar3 = *(undefined4 *)(iVar1 + 0x1bc);
  uVar4 = *(undefined4 *)(iVar1 + 0x1c0);
  uVar5 = *(undefined4 *)(iVar1 + 0x1c4);
  *(undefined4 *)(param_1 + 0x564) = *(undefined4 *)(iVar1 + 0x1b8);
  *(undefined4 *)(param_1 + 0x568) = uVar3;
  *(undefined4 *)(param_1 + 0x56c) = uVar4;
  *(undefined4 *)(param_1 + 0x570) = uVar5;
  *(undefined8 *)(param_1 + 0x574) = *(undefined8 *)(iVar1 + 0x1c8);
  local_534 = param_2;
  if (piVar2 == (int *)0x0) {
    *param_3 = *(undefined4 *)(*(int *)(iVar1 + 0x1ac) + param_2 * 4);
    param_3[1] = *(undefined4 *)(*(int *)(iVar1 + 0x1b0) + param_2 * 4);
LAB_101f0500:
    iVar6 = local_530;
    if (*(char *)(param_1 + 0x46) == '\0') {
      (**(code **)(local_530 + 0x18))(auStack_2a4,param_1,1);
      (**(code **)(iVar6 + 0x1c))(iVar1,iVar1 + 0xa8,aiStack_52c);
      iVar1 = local_538;
      piStack_8c = aiStack_52c;
      iVar6 = (**(code **)(local_538 + 0xc))(auStack_2a4,*param_3,param_3[1]);
      if ((char)iVar6 == -0x5c) {
        *(undefined1 *)(*(int *)(param_1 + 8) + 0xa0) = 0;
        *param_4 = 1;
        iVar6 = (**(code **)(iVar1 + 0xc))(auStack_2a4,*param_3,param_3[1]);
      }
    }
    else {
      iVar6 = (**(code **)(local_538 + 8))(param_1,*param_3,param_3[1]);
    }
    if ((piVar2 != (int *)0x0) && (iVar6 == 0)) {
      if (*(int *)(*piVar2 + 8) == 0) {
        iVar6 = 0;
        goto LAB_101f0640;
      }
      aiStack_52c[0] = FUN_101c5299(*(undefined4 *)(param_1 + 0x20));
      aiStack_52c[0] = aiStack_52c[0] >> 0x10;
      aiStack_52c[1] = 0;
      aiStack_52c[2] = FUN_101c5299(*(undefined4 *)(param_1 + 0x28));
      aiStack_52c[2] = aiStack_52c[2] >> 0x10;
      iStack_520 = FUN_101c5299(*(undefined4 *)(param_1 + 0x2c));
      iStack_520 = iStack_520 >> 0x10;
      iVar6 = (**(code **)(*piVar2 + 8))(piVar2[1],local_534,0,aiStack_52c);
      *(int *)(param_1 + 0x20) = aiStack_52c[0] << 0x10;
      *(ulonglong *)(param_1 + 0x28) = CONCAT44(iStack_520 << 0x10,aiStack_52c[2] << 0x10);
    }
  }
  else {
    *param_3 = 0;
    iVar6 = (**(code **)*piVar2)(piVar2[1],param_2,param_3);
    if (iVar6 == 0) goto LAB_101f0500;
  }
  if ((piVar2 != (int *)0x0) && (iVar6 != 0)) {
    (**(code **)(*piVar2 + 4))(piVar2[1],param_3);
  }
LAB_101f0640:
  if (DAT_10388d00 != (local_14 ^ (uint)&local_538)) {
                    /* WARNING: Subroutine does not return */
    FUN_102283e0();
  }
  return iVar6;
}

