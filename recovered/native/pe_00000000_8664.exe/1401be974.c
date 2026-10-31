/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1401be974 */

ulonglong FUN_1401be974(ushort *param_1,byte *param_2,ulonglong param_3,longlong param_4)

{
  int iVar1;
  DWORD DVar2;
  ulonglong uVar3;
  longlong lVar4;
  uint uVar5;
  byte *pbVar6;
  undefined8 local_res8;
  byte *local_res10;
  undefined8 in_stack_ffffffffffffffd0;
  uint uVar7;
  undefined8 uVar8;
  
  uVar7 = (uint)((ulonglong)in_stack_ffffffffffffffd0 >> 0x20);
  uVar8 = 0xfffffffffffffffe;
  uVar3 = 0;
  if (param_1 != (ushort *)0x0) {
    if (param_3 == 0) {
      return 0;
    }
    *param_1 = 0;
  }
  local_res10 = param_2;
  if (param_2 == (byte *)0x0) {
    *(undefined1 *)(param_4 + 0x30) = 1;
    *(undefined4 *)(param_4 + 0x2c) = 0x16;
    FUN_1401ae820(0,0,0,0,0,param_4);
    uVar3 = 0xffffffffffffffff;
  }
  else {
    if (*(char *)(param_4 + 0x28) == '\0') {
      FUN_140193950(param_4);
    }
    iVar1 = *(int *)(*(longlong *)(param_4 + 0x18) + 0xc);
    if (iVar1 == 0xfde9) {
      local_res8 = 0;
      uVar3 = FUN_1401b40d0(param_1,&local_res10,param_3,&local_res8,param_4);
    }
    else {
      lVar4 = *(longlong *)(*(longlong *)(param_4 + 0x18) + 0x138);
      if (param_1 == (ushort *)0x0) {
        uVar3 = 0xffffffffffffffff;
        if (lVar4 == 0) {
          do {
            uVar3 = uVar3 + 1;
          } while (local_res10[uVar3] != 0);
          return uVar3;
        }
        iVar1 = FUN_1401aeaf0(iVar1,9,local_res10,0xffffffff,0,(ulonglong)uVar7 << 0x20,uVar8);
        lVar4 = (longlong)iVar1;
        if (lVar4 == 0) {
          *(undefined1 *)(param_4 + 0x30) = 1;
          *(undefined4 *)(param_4 + 0x2c) = 0x2a;
          return 0xffffffffffffffff;
        }
      }
      else {
        if (lVar4 == 0) {
          if (param_3 == 0) {
            return 0;
          }
          do {
            *param_1 = (ushort)local_res10[uVar3];
            if (local_res10[uVar3] == 0) {
              return uVar3;
            }
            uVar3 = uVar3 + 1;
            param_1 = param_1 + 1;
          } while (uVar3 < param_3);
          return uVar3;
        }
        uVar5 = (uint)param_3;
        iVar1 = FUN_1401aeaf0(iVar1,9,local_res10,0xffffffff,param_1,CONCAT44(uVar7,uVar5),uVar8);
        lVar4 = (longlong)iVar1;
        if (lVar4 == 0) {
          DVar2 = GetLastError();
          if (DVar2 == 0x7a) {
            uVar3 = param_3 & 0xffffffff;
            pbVar6 = local_res10;
            while (uVar5 != 0) {
              uVar5 = (int)uVar3 - 1;
              uVar3 = (ulonglong)uVar5;
              if (*pbVar6 == 0) break;
              if ((*(short *)(**(longlong **)(param_4 + 0x18) + (ulonglong)*pbVar6 * 2) < 0) &&
                 (pbVar6 = pbVar6 + 1, *pbVar6 == 0)) goto LAB_1401bea9b;
              pbVar6 = pbVar6 + 1;
            }
            iVar1 = FUN_1401aeaf0(*(undefined4 *)(*(longlong *)(param_4 + 0x18) + 0xc),1,local_res10
                                  ,(int)pbVar6 - (int)local_res10,param_1,param_3 & 0xffffffff);
            if ((longlong)iVar1 != 0) {
              return (longlong)iVar1;
            }
          }
LAB_1401bea9b:
          *(undefined1 *)(param_4 + 0x30) = 1;
          *(undefined4 *)(param_4 + 0x2c) = 0x2a;
          *param_1 = 0;
          return 0xffffffffffffffff;
        }
      }
      uVar3 = lVar4 - 1;
    }
  }
  return uVar3;
}

