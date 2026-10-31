/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1801fd2bb */

ulonglong FUN_1801fd2bb(longlong *param_1,longlong *param_2,undefined8 param_3,longlong param_4)

{
  ulonglong uVar1;
  longlong lVar2;
  uint uVar3;
  undefined1 auStack_68 [44];
  uint local_3c;
  short local_36;
  uint local_34;
  ulonglong local_30;
  
  local_30 = DAT_180402640 ^ (ulonglong)auStack_68;
  (*(code *)**(undefined8 **)(param_4 + 8))(param_1,0,0,param_3);
  param_1[0x12] = (longlong)param_2;
  *(undefined4 *)(param_1 + 0x14) = 0;
  param_1[0x13] = 0;
  param_1[0x15] = 0;
  *(undefined8 *)((longlong)param_1 + 0xaf) = 0;
  uVar1 = FUN_1801fddce(param_2,"%!PS-AdobeFont",0xe);
  local_34 = (uint)uVar1;
  if (local_34 == 0) {
LAB_1801fd352:
    uVar1 = FUN_1801ce63e(param_2,0);
    local_34 = (uint)uVar1;
    if (local_34 == 0) {
      uVar1 = FUN_1801fde86(param_2,&local_36,&local_3c);
      local_34 = (uint)uVar1;
      if (local_34 == 0) {
        if (local_36 == -0x7fff) {
          *(undefined1 *)((longlong)param_1 + 0xb4) = 1;
        }
        else {
          uVar1 = FUN_1801ce63e(param_2,0);
          local_34 = (uint)uVar1;
          if (local_34 != 0) goto LAB_1801fd37e;
          local_3c = *(uint *)(param_2 + 1);
        }
        uVar3 = local_3c;
        if (param_2[4] == 0) {
          param_1[0x13] = (ulonglong)*(uint *)((longlong)param_2 + 0xc) + *param_2;
          *(uint *)(param_1 + 0x14) = local_3c;
          *(undefined1 *)((longlong)param_1 + 0xb5) = 1;
          uVar1 = FUN_1801ce690(param_2);
          local_34 = (uint)uVar1;
          if (local_34 == 0) {
            uVar3 = *(uint *)(param_1 + 0x14);
LAB_1801fd47c:
            lVar2 = param_1[0x13];
            param_1[1] = lVar2;
            *param_1 = lVar2;
            param_1[2] = (ulonglong)uVar3 + lVar2;
            uVar1 = 0;
            goto LAB_1801fd3a5;
          }
        }
        else {
          lVar2 = FUN_1801cc006(param_3,local_3c,&local_34);
          param_1[0x13] = lVar2;
          uVar1 = (ulonglong)local_34;
          if (local_34 == 0) {
            uVar1 = FUN_1801ce682(param_2,lVar2,uVar3);
            local_34 = (uint)uVar1;
            if (local_34 == 0) {
              *(uint *)(param_1 + 0x14) = uVar3;
              goto LAB_1801fd47c;
            }
          }
        }
      }
    }
  }
  else if ((char)uVar1 == '\x02') {
    uVar1 = FUN_1801fddce(param_2,"%!FontType",10);
    local_34 = (uint)uVar1;
    if (local_34 == 0) goto LAB_1801fd352;
  }
LAB_1801fd37e:
  if (*(char *)((longlong)param_1 + 0xb5) == '\0') {
    FUN_1801c9b65(param_3,param_1[0x13]);
    param_1[0x13] = 0;
    uVar1 = (ulonglong)local_34;
  }
LAB_1801fd3a5:
  if (DAT_180402640 == (local_30 ^ (ulonglong)auStack_68)) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1802396d0(local_30 ^ (ulonglong)auStack_68);
}

