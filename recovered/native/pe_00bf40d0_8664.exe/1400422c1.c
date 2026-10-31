/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 1400422c1 */

int FUN_1400422c1(longlong param_1,longlong param_2,undefined4 param_3,uint param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  undefined1 auStackY_a8 [32];
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
  
  local_48 = DAT_14012ea80 ^ (ulonglong)auStackY_a8;
  lVar4 = *(longlong *)(param_2 + 8);
  iVar3 = (**(code **)(*(longlong *)(lVar4 + 0x2d0) + 0x98))
                    (lVar4,*(undefined4 *)(param_1 + 0x80),param_3,param_4);
  if (iVar3 == 0) {
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
    iVar3 = 0;
  }
  else if ((((char)iVar3 == -99) && ((*(byte *)(*(longlong *)(param_2 + 8) + 8) & 1) == 0)) &&
          (*(int *)(lVar4 + 0x430) != 0)) {
    iVar1 = *(int *)(param_1 + 0x1c);
    iVar2 = *(int *)(param_1 + 0x20);
    iVar3 = 0;
    local_5a = 0;
    local_5c = 0;
    local_5e = 0;
    local_60 = 0;
    FUN_140043488(lVar4,param_3,&local_5a,&local_5e);
    FUN_1400434b0(lVar4,param_3,0,&local_5c,(short *)&local_60);
    *(undefined8 *)(param_2 + 0x30) = 0;
    lVar4 = (longlong)local_5a * (longlong)iVar1;
    *(int *)(param_2 + 0x38) = (int)((ulonglong)(lVar4 + 0x8000 + (lVar4 >> 0x3f)) >> 0x10);
    *(undefined4 *)(param_2 + 0x3c) = 0;
    lVar4 = (ulonglong)local_5e * (longlong)iVar1;
    *(int *)(param_2 + 0x40) = (int)((ulonglong)(lVar4 + 0x8000 + (lVar4 >> 0x3f)) >> 0x10);
    *(undefined4 *)(param_2 + 0x44) = 0;
    lVar4 = (longlong)local_5c * (longlong)iVar2;
    *(int *)(param_2 + 0x48) = (int)((ulonglong)(lVar4 + 0x8000 + (lVar4 >> 0x3f)) >> 0x10);
    lVar4 = (ulonglong)local_60 * (longlong)iVar2;
    *(int *)(param_2 + 0x4c) = (int)((ulonglong)(lVar4 + 0x8000 + (lVar4 >> 0x3f)) >> 0x10);
    *(undefined4 *)(param_2 + 0x60) = 0x62697473;
    *(undefined1 *)(param_2 + 0x82) = 1;
    *(undefined8 *)(param_2 + 0x90) = 0;
  }
  if (DAT_14012ea80 == (local_48 ^ (ulonglong)auStackY_a8)) {
    return iVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_140086440(local_48 ^ (ulonglong)auStackY_a8);
}

