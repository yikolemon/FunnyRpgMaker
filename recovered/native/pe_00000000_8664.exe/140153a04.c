/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 140153a04 */

int FUN_140153a04(longlong *param_1,longlong param_2,char param_3,char param_4)

{
  undefined8 uVar1;
  byte bVar2;
  ushort uVar3;
  undefined4 uVar4;
  uint uVar5;
  int iVar6;
  undefined1 auStack_68 [36];
  int local_44;
  ulonglong local_40;
  
  local_40 = DAT_140f17b40 ^ (ulonglong)auStack_68;
  uVar1 = *(undefined8 *)(param_2 + 0x30);
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[5] = 0;
  *param_1 = param_2;
  uVar4 = FUN_14012db43(param_2);
  *(undefined4 *)(param_1 + 1) = uVar4;
  if (param_4 == '\0') {
    uVar3 = FUN_14012d676(param_2,&local_44);
    if (local_44 == 0) {
      uVar5 = (uint)uVar3;
      uVar4 = 3;
      goto LAB_140153a9e;
    }
  }
  else {
    uVar5 = FUN_14012d9e0(param_2,&local_44);
    if (local_44 == 0) {
      uVar4 = 5;
LAB_140153a9e:
      *(undefined4 *)((longlong)param_1 + 0xc) = uVar4;
      iVar6 = 0;
      if (uVar5 == 0) goto LAB_140153b36;
      bVar2 = FUN_14012de17(param_2,&local_44);
      if (local_44 == 0) {
        if ((byte)(bVar2 - 5) < 0xfc) {
LAB_140153acc:
          local_44 = 8;
        }
        else {
          *(uint *)(param_1 + 2) = uVar5;
          *(byte *)((longlong)param_1 + 0x14) = bVar2;
          *(uint *)(param_1 + 3) =
               (uVar5 + 1) * (uint)bVar2 + (int)param_1[1] + *(int *)((longlong)param_1 + 0xc);
          local_44 = FUN_14012d664(param_2,uVar5 * bVar2);
          if ((local_44 == 0) && (iVar6 = FUN_140152ece(param_1,&local_44), local_44 == 0)) {
            if (iVar6 == 0) goto LAB_140153acc;
            iVar6 = iVar6 + -1;
            *(int *)((longlong)param_1 + 0x1c) = iVar6;
            if (param_3 == '\0') {
              local_44 = FUN_14012d664(param_2,iVar6);
            }
            else {
              local_44 = FUN_14012dc0a(param_2,iVar6,param_1 + 5);
            }
            iVar6 = 0;
            if (local_44 == 0) goto LAB_140153b36;
          }
        }
      }
    }
  }
  FUN_140128b39(uVar1,param_1[4]);
  param_1[4] = 0;
  iVar6 = local_44;
LAB_140153b36:
  if (DAT_140f17b40 != (local_40 ^ (ulonglong)auStack_68)) {
                    /* WARNING: Subroutine does not return */
    FUN_140188a00(local_40 ^ (ulonglong)auStack_68);
  }
  return iVar6;
}

