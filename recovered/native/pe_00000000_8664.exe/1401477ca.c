/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1401477ca */

ulonglong FUN_1401477ca(longlong param_1,undefined4 param_2,undefined4 param_3)

{
  byte *pbVar1;
  longlong lVar2;
  undefined8 uVar3;
  ushort uVar4;
  ulonglong uVar5;
  undefined8 uVar6;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  uint *local_60;
  uint local_4c;
  ulonglong local_48;
  
  local_48 = DAT_140f17b40 ^ (ulonglong)auStack_88;
  lVar2 = *(longlong *)(param_1 + 0x18);
  uVar4 = *(ushort *)(lVar2 + 0x1a);
  if (*(uint *)(lVar2 + 8) < (uint)*(ushort *)(lVar2 + 0x62) + (uint)uVar4 + 4) {
    uVar5 = FUN_140128d2c(lVar2,4,0);
    if ((int)uVar5 != 0) goto LAB_1401478e0;
    uVar4 = *(ushort *)(lVar2 + 0x1a);
  }
  *(undefined8 *)(*(longlong *)(lVar2 + 0x20) + (ulonglong)uVar4 * 8) =
       *(undefined8 *)(param_1 + 0x58);
  *(undefined8 *)(*(longlong *)(lVar2 + 0x20) + 8 + (ulonglong)*(ushort *)(lVar2 + 0x1a) * 8) =
       *(undefined8 *)(param_1 + 0x60);
  *(undefined8 *)(*(longlong *)(lVar2 + 0x20) + 0x10 + (ulonglong)*(ushort *)(lVar2 + 0x1a) * 8) =
       *(undefined8 *)(param_1 + 0xf8);
  *(undefined8 *)(*(longlong *)(lVar2 + 0x20) + 0x18 + (ulonglong)*(ushort *)(lVar2 + 0x1a) * 8) =
       *(undefined8 *)(param_1 + 0x100);
  uVar3 = *(undefined8 *)(param_1 + 0x28);
  lVar2 = *(longlong *)(param_1 + 0xd8);
  uVar6 = *(undefined8 *)(lVar2 + 0x10);
  if (*(int *)(lVar2 + 0x218) != 0) {
    FUN_140128b39(uVar6,*(undefined8 *)(lVar2 + 0x220));
    *(undefined8 *)(lVar2 + 0x220) = 0;
  }
  *(undefined4 *)(lVar2 + 0x218) = 0;
  uVar5 = FUN_14012d612(uVar3,*(undefined4 *)(param_1 + 0xe0));
  local_4c = (uint)uVar5;
  if (local_4c == 0) {
    uVar4 = FUN_14012d676(uVar3,&local_4c);
    uVar5 = (ulonglong)local_4c;
    if (local_4c == 0) {
      if (uVar4 == 0) {
        uVar5 = 0;
      }
      else {
        uVar5 = 0x16;
        if ((uint)uVar4 <= *(uint *)(param_1 + 0x30)) {
          local_68 = 0;
          local_60 = &local_4c;
          uVar6 = FUN_14012b8aa(uVar6,1,0,(uint)uVar4);
          *(undefined8 *)(lVar2 + 0x220) = uVar6;
          uVar5 = (ulonglong)local_4c;
          if (local_4c == 0) {
            uVar5 = FUN_14012d656(uVar3,uVar6,(uint)uVar4);
            local_4c = (uint)uVar5;
            if (local_4c == 0) {
              *(uint *)(lVar2 + 0x218) = (uint)uVar4;
              FUN_140147d3a(param_1 + 0xa0,*(longlong *)(param_1 + 0x18) + 0x18,param_2,param_3);
              if (*(short *)(param_1 + 0xa0) != 4) {
                uVar5 = 0;
                do {
                  pbVar1 = (byte *)(*(longlong *)(param_1 + 0xc0) + uVar5);
                  *pbVar1 = *pbVar1 & 0xe7;
                  uVar5 = uVar5 + 1;
                } while (uVar5 < *(ushort *)(param_1 + 0xa0) - 4);
              }
              uVar5 = FUN_140147d95(param_1,1);
            }
          }
        }
      }
    }
  }
LAB_1401478e0:
  if (DAT_140f17b40 == (local_48 ^ (ulonglong)auStack_88)) {
    return uVar5;
  }
                    /* WARNING: Subroutine does not return */
  FUN_140188a00(local_48 ^ (ulonglong)auStack_88);
}

