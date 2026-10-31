/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 140051954 */

int FUN_140051954(undefined8 *param_1,longlong *param_2,char param_3,char param_4)

{
  longlong lVar1;
  byte bVar2;
  ushort uVar3;
  undefined4 uVar4;
  uint uVar5;
  undefined8 uVar6;
  int iVar7;
  undefined1 auStack_68 [36];
  int local_44;
  ulonglong local_40;
  
  local_40 = DAT_14012ea80 ^ (ulonglong)auStack_68;
  lVar1 = param_2[6];
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[5] = 0;
  *param_1 = param_2;
  uVar4 = FUN_140020f72((longlong)param_2);
  *(undefined4 *)(param_1 + 1) = uVar4;
  if (param_4 == '\0') {
    uVar3 = FUN_140020aa5(param_2,&local_44);
    if (local_44 == 0) {
      uVar5 = (uint)uVar3;
      uVar4 = 3;
      goto LAB_1400519ee;
    }
  }
  else {
    uVar5 = FUN_140020e0f(param_2,&local_44);
    if (local_44 == 0) {
      uVar4 = 5;
LAB_1400519ee:
      *(undefined4 *)((longlong)param_1 + 0xc) = uVar4;
      iVar7 = 0;
      if (uVar5 == 0) goto LAB_140051a86;
      bVar2 = FUN_140021246(param_2,&local_44);
      if (local_44 == 0) {
        if ((byte)(bVar2 - 5) < 0xfc) {
LAB_140051a1c:
          local_44 = 8;
        }
        else {
          *(uint *)(param_1 + 2) = uVar5;
          *(byte *)((longlong)param_1 + 0x14) = bVar2;
          *(uint *)(param_1 + 3) =
               (uVar5 + 1) * (uint)bVar2 + *(int *)(param_1 + 1) + *(int *)((longlong)param_1 + 0xc)
          ;
          uVar6 = FUN_140020a93((longlong)param_2,uVar5 * bVar2);
          local_44 = (int)uVar6;
          if ((local_44 == 0) && (uVar5 = FUN_140050e1e(param_1,&local_44), local_44 == 0)) {
            if (uVar5 == 0) goto LAB_140051a1c;
            uVar5 = uVar5 - 1;
            *(uint *)((longlong)param_1 + 0x1c) = uVar5;
            if (param_3 == '\0') {
              uVar6 = FUN_140020a93((longlong)param_2,uVar5);
              local_44 = (int)uVar6;
            }
            else {
              local_44 = FUN_140021039(param_2,uVar5,param_1 + 5);
            }
            iVar7 = 0;
            if (local_44 == 0) goto LAB_140051a86;
          }
        }
      }
    }
  }
  FUN_14001c53d(lVar1,param_1[4]);
  param_1[4] = 0;
  iVar7 = local_44;
LAB_140051a86:
  if (DAT_14012ea80 != (local_40 ^ (ulonglong)auStack_68)) {
                    /* WARNING: Subroutine does not return */
    FUN_140086440(local_40 ^ (ulonglong)auStack_68);
  }
  return iVar7;
}

