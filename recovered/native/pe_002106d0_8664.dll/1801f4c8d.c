/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1801f4c8d */

int FUN_1801f4c8d(longlong param_1,longlong param_2,undefined4 param_3,uint param_4)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  undefined1 auStack_a8 [32];
  ushort *local_88;
  longlong local_80;
  uint *local_78;
  longlong local_68;
  ushort local_60;
  ushort local_5e;
  short local_5c;
  short local_5a;
  uint local_58;
  short local_54;
  short local_52;
  ushort local_50;
  short local_4e;
  short local_4c;
  ushort local_4a;
  ulonglong local_48;
  
  local_48 = DAT_180402640 ^ (ulonglong)auStack_a8;
  lVar3 = *(longlong *)(param_2 + 8);
  local_80 = param_2 + 0x68;
  local_88 = *(ushort **)(lVar3 + 0xa0);
  local_78 = &local_58;
  iVar2 = (**(code **)(*(longlong *)(lVar3 + 0x2d0) + 0x98))
                    (lVar3,*(undefined4 *)(param_1 + 0x80),param_3,param_4);
  if (iVar2 == 0) {
    *(ulonglong *)(param_2 + 0x30) = CONCAT44((local_58 & 0xffff) << 6,(local_58 >> 0x10) << 6);
    *(int *)(param_2 + 0x38) = (int)local_54 << 6;
    *(int *)(param_2 + 0x3c) = (int)local_52 << 6;
    *(uint *)(param_2 + 0x40) = (uint)local_50 << 6;
    *(int *)(param_2 + 0x44) = (int)local_4e << 6;
    *(int *)(param_2 + 0x48) = (int)local_4c << 6;
    *(uint *)(param_2 + 0x4c) = (uint)local_4a << 6;
    *(undefined4 *)(param_2 + 0x60) = 0x62697473;
    if ((param_4 & 0x10) == 0) {
      *(int *)(param_2 + 0x90) = (int)local_54;
      *(int *)(param_2 + 0x94) = (int)local_52;
    }
    else {
      *(int *)(param_2 + 0x90) = (int)local_4e;
      *(int *)(param_2 + 0x94) = (int)local_4c;
    }
    iVar2 = 0;
  }
  else if ((((char)iVar2 == -99) && ((*(byte *)(*(longlong *)(param_2 + 8) + 8) & 1) == 0)) &&
          (*(int *)(lVar3 + 0x430) != 0)) {
    iVar1 = *(int *)(param_1 + 0x1c);
    local_68 = (longlong)*(int *)(param_1 + 0x20);
    iVar2 = 0;
    local_5a = 0;
    local_5c = 0;
    local_5e = 0;
    local_60 = 0;
    FUN_1801f5e54(lVar3,param_3,&local_5a,&local_5e);
    local_88 = &local_60;
    FUN_1801f5e7c(lVar3,param_3,0,&local_5c);
    *(undefined8 *)(param_2 + 0x30) = 0;
    lVar3 = (longlong)local_5a * (longlong)iVar1;
    *(int *)(param_2 + 0x38) = (int)((ulonglong)(lVar3 + 0x8000 + (lVar3 >> 0x3f)) >> 0x10);
    *(undefined4 *)(param_2 + 0x3c) = 0;
    lVar3 = (ulonglong)local_5e * (longlong)iVar1;
    *(int *)(param_2 + 0x40) = (int)((ulonglong)(lVar3 + 0x8000 + (lVar3 >> 0x3f)) >> 0x10);
    *(undefined4 *)(param_2 + 0x44) = 0;
    *(int *)(param_2 + 0x48) =
         (int)((ulonglong)(local_5c * local_68 + 0x8000 + (local_5c * local_68 >> 0x3f)) >> 0x10);
    *(int *)(param_2 + 0x4c) =
         (int)((ulonglong)local_60 * local_68 + 0x8000 +
               ((longlong)((ulonglong)local_60 * local_68) >> 0x3f) >> 0x10);
    *(undefined4 *)(param_2 + 0x60) = 0x62697473;
    *(undefined1 *)(param_2 + 0x82) = 1;
    *(undefined8 *)(param_2 + 0x90) = 0;
  }
  if (DAT_180402640 == (local_48 ^ (ulonglong)auStack_a8)) {
    return iVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1802396d0(local_48 ^ (ulonglong)auStack_a8);
}

