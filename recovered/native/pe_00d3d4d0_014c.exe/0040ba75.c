/* Ghidra pseudocode. Image: pe_00d3d4d0_014c.exe Address: 0040ba75 */

ushort * __cdecl FUN_0040ba75(int param_1,uint *param_2,void *param_3)

{
  uint *puVar1;
  undefined8 uVar2;
  uint uVar3;
  void *local_18;
  uint local_14;
  uint local_10;
  
  local_10 = DAT_0050e8c0 ^ (uint)&local_18;
  puVar1 = (uint *)(param_1 + 2);
  if (puVar1 == param_2) {
                    /* WARNING: Subroutine does not return */
    FUN_0040ba4e(0x504ac6);
  }
  if (*(ushort *)puVar1 == 0x7b) {
    uVar2 = FUN_0040bb79((undefined2 *)puVar1,(undefined2 *)(param_1 + 4),
                         *(undefined4 **)((int)param_3 + 0x10));
    *(int *)((int)param_3 + 0x10) = (int)((ulonglong)uVar2 >> 0x20);
  }
  else {
    if (*(ushort *)puVar1 == 0x7d) {
      uVar3 = *(uint *)((int)param_3 + 0xc);
      if ((int)uVar3 < 0) {
                    /* WARNING: Subroutine does not return */
        FUN_0040ba4e(0x5039d2);
      }
      *(uint *)((int)param_3 + 0xc) = uVar3 + 1;
    }
    else {
      local_18 = param_3;
      local_14 = 0xffffffff;
      puVar1 = (uint *)FUN_0040be68((ushort *)puVar1,(ushort *)param_2,(int *)&local_18);
      if (puVar1 == param_2) {
LAB_0040bb5b:
                    /* WARNING: Subroutine does not return */
        FUN_0040ba4e(0x504a88);
      }
      if ((ushort)*puVar1 == 0x3a) {
        puVar1 = FUN_0040bf36(param_3,local_14,(uint *)((int)puVar1 + 2),param_2);
        if ((puVar1 == param_2) || ((short)*puVar1 != 0x7d)) {
                    /* WARNING: Subroutine does not return */
          FUN_0040ba4e(0x5049c3);
        }
        goto LAB_0040bb2a;
      }
      uVar3 = local_14;
      if ((ushort)*puVar1 != 0x7d) goto LAB_0040bb5b;
    }
    FUN_0040bdc4(param_3,uVar3,(int)puVar1);
  }
LAB_0040bb2a:
  if (DAT_0050e8c0 != (local_10 ^ (uint)&local_18)) {
                    /* WARNING: Subroutine does not return */
    FUN_0047f2c0(local_10 ^ (uint)&local_18);
  }
  return (ushort *)((int)puVar1 + 2);
}

