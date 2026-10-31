/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 101e3c8a */

void __fastcall FUN_101e3c8a(int param_1,ushort *param_2)

{
  int iVar1;
  uint uVar2;
  
  uVar2 = (uint)*param_2;
  if (uVar2 < *(ushort *)(param_1 + 0x60)) {
    iVar1 = (**(code **)(param_1 + 0x1dc))
                      (param_1,*(undefined4 *)(*(int *)(param_1 + 0x68) + uVar2 * 8),
                       *(undefined4 *)(*(int *)(param_1 + 0x68) + 4 + uVar2 * 8));
    (**(code **)(param_1 + 0x1e8))(param_1,param_1 + 0x60,uVar2,*(int *)(param_2 + 2) - iVar1);
    if (*(short *)(param_1 + 0xf2) == 0) {
      *(undefined8 *)(*(int *)(param_1 + 100) + uVar2 * 8) =
           *(undefined8 *)(*(int *)(param_1 + 0x68) + uVar2 * 8);
    }
  }
  else if (*(char *)(param_1 + 0x1ce) != '\0') {
    *(undefined4 *)(param_1 + 0x10) = 0x86;
  }
  return;
}

