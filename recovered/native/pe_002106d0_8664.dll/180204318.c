/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 180204318 */

int FUN_180204318(longlong *param_1,longlong param_2,char param_3,char param_4)

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
  
  local_40 = DAT_180402640 ^ (ulonglong)auStack_68;
  uVar1 = *(undefined8 *)(param_2 + 0x30);
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[5] = 0;
  *param_1 = param_2;
  uVar4 = FUN_1801ceb6f(param_2);
  *(undefined4 *)(param_1 + 1) = uVar4;
  if (param_4 == '\0') {
    uVar3 = FUN_1801ce6a2(param_2,&local_44);
    if (local_44 == 0) {
      uVar5 = (uint)uVar3;
      uVar4 = 3;
      goto LAB_1802043b2;
    }
  }
  else {
    uVar5 = FUN_1801cea0c(param_2,&local_44);
    if (local_44 == 0) {
      uVar4 = 5;
LAB_1802043b2:
      *(undefined4 *)((longlong)param_1 + 0xc) = uVar4;
      iVar6 = 0;
      if (uVar5 == 0) goto LAB_18020444a;
      bVar2 = FUN_1801cee43(param_2,&local_44);
      if (local_44 == 0) {
        if ((byte)(bVar2 - 5) < 0xfc) {
LAB_1802043e0:
          local_44 = 8;
        }
        else {
          *(uint *)(param_1 + 2) = uVar5;
          *(byte *)((longlong)param_1 + 0x14) = bVar2;
          *(uint *)(param_1 + 3) =
               (uVar5 + 1) * (uint)bVar2 + (int)param_1[1] + *(int *)((longlong)param_1 + 0xc);
          local_44 = FUN_1801ce690(param_2,uVar5 * bVar2);
          if ((local_44 == 0) && (iVar6 = FUN_1802037e2(param_1,&local_44), local_44 == 0)) {
            if (iVar6 == 0) goto LAB_1802043e0;
            iVar6 = iVar6 + -1;
            *(int *)((longlong)param_1 + 0x1c) = iVar6;
            if (param_3 == '\0') {
              local_44 = FUN_1801ce690(param_2,iVar6);
            }
            else {
              local_44 = FUN_1801cec36(param_2,iVar6,param_1 + 5);
            }
            iVar6 = 0;
            if (local_44 == 0) goto LAB_18020444a;
          }
        }
      }
    }
  }
  FUN_1801c9b65(uVar1,param_1[4]);
  param_1[4] = 0;
  iVar6 = local_44;
LAB_18020444a:
  if (DAT_180402640 != (local_40 ^ (ulonglong)auStack_68)) {
                    /* WARNING: Subroutine does not return */
    FUN_1802396d0(local_40 ^ (ulonglong)auStack_68);
  }
  return iVar6;
}

