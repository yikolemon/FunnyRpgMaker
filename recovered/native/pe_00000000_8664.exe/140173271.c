/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 140173271 */

ulonglong FUN_140173271(longlong param_1,undefined8 param_2)

{
  ushort *puVar1;
  uint uVar2;
  ulonglong uVar3;
  
  uVar2 = (**(code **)(param_1 + 0x2a0))(param_1,0x4f532f32,param_2,0);
  if (uVar2 == 0) {
    puVar1 = (ushort *)(param_1 + 0x208);
    uVar2 = FUN_14012e0a0(param_2,&DAT_140eb1080,puVar1);
    if (uVar2 == 0) {
      *(undefined8 *)(param_1 + 600) = 0;
      *(undefined8 *)(param_1 + 0x260) = 0;
      *(undefined4 *)(param_1 + 0x268) = 0;
      *(undefined2 *)(param_1 + 0x26c) = 0xffff;
      if (*(short *)(param_1 + 0x208) == 0) {
        return 0;
      }
      uVar2 = FUN_14012e0a0(param_2,&DAT_140eb1130,puVar1);
      if (uVar2 == 0) {
        if (*puVar1 < 2) {
          return 0;
        }
        uVar2 = FUN_14012e0a0(param_2,&DAT_140eb1140,puVar1);
        if (uVar2 == 0) {
          if (*puVar1 < 5) {
            return 0;
          }
          uVar3 = FUN_14012e0a0(param_2,&DAT_140eb1160,puVar1);
          return uVar3;
        }
      }
    }
  }
  return (ulonglong)uVar2;
}

