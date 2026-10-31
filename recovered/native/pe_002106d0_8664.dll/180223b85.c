/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 180223b85 */

ulonglong FUN_180223b85(longlong param_1,undefined8 param_2)

{
  ushort *puVar1;
  uint uVar2;
  ulonglong uVar3;
  
  uVar2 = (**(code **)(param_1 + 0x2a0))(param_1,0x4f532f32,param_2,0);
  if (uVar2 == 0) {
    puVar1 = (ushort *)(param_1 + 0x208);
    uVar2 = FUN_1801cf0cc(param_2,&DAT_18034cd10,puVar1);
    if (uVar2 == 0) {
      *(undefined8 *)(param_1 + 600) = 0;
      *(undefined8 *)(param_1 + 0x260) = 0;
      *(undefined4 *)(param_1 + 0x268) = 0;
      *(undefined2 *)(param_1 + 0x26c) = 0xffff;
      if (*(short *)(param_1 + 0x208) == 0) {
        return 0;
      }
      uVar2 = FUN_1801cf0cc(param_2,&DAT_18034cdc0,puVar1);
      if (uVar2 == 0) {
        if (*puVar1 < 2) {
          return 0;
        }
        uVar2 = FUN_1801cf0cc(param_2,&DAT_18034cdd0,puVar1);
        if (uVar2 == 0) {
          if (*puVar1 < 5) {
            return 0;
          }
          uVar3 = FUN_1801cf0cc(param_2,&DAT_18034cdf0,puVar1);
          return uVar3;
        }
      }
    }
  }
  return (ulonglong)uVar2;
}

