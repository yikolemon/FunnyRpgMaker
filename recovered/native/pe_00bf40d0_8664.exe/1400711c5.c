/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 1400711c5 */

int FUN_1400711c5(longlong param_1,longlong *param_2)

{
  ushort *puVar1;
  int iVar2;
  
  iVar2 = (**(code **)(param_1 + 0x2a0))(param_1,0x4f532f32,param_2,0);
  if (iVar2 == 0) {
    puVar1 = (ushort *)(param_1 + 0x208);
    iVar2 = FUN_1400214cf(param_2,0x140109e40,(longlong)puVar1);
    if (iVar2 == 0) {
      *(undefined8 *)(param_1 + 600) = 0;
      *(undefined8 *)(param_1 + 0x260) = 0;
      *(undefined4 *)(param_1 + 0x268) = 0;
      *(undefined2 *)(param_1 + 0x26c) = 0xffff;
      iVar2 = 0;
      if ((((*(short *)(param_1 + 0x208) != 0) &&
           (iVar2 = FUN_1400214cf(param_2,0x140109ef0,(longlong)puVar1), iVar2 == 0)) &&
          (iVar2 = 0, 1 < *puVar1)) &&
         ((iVar2 = FUN_1400214cf(param_2,0x140109f00,(longlong)puVar1), iVar2 == 0 &&
          (iVar2 = 0, 4 < *puVar1)))) {
        iVar2 = FUN_1400214cf(param_2,0x140109f20,(longlong)puVar1);
        return iVar2;
      }
    }
  }
  return iVar2;
}

