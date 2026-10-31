/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1009c4c2 */

int __thiscall FUN_1009c4c2(int param_1,int param_2)

{
  int iVar1;
  
  if (param_1 != param_2) {
    if (*(uint *)(param_2 + 0x18) < 8) {
      iVar1 = param_2 + 4;
    }
    else {
      iVar1 = *(int *)(param_2 + 4);
    }
    FUN_10004664(iVar1,*(undefined4 *)(param_2 + 0x14));
    FUN_1007798c(*(int *)(param_2 + 0x1c),*(int *)(param_2 + 0x20) - *(int *)(param_2 + 0x1c));
  }
  *(undefined4 *)(param_1 + 0x28) = *(undefined4 *)(param_2 + 0x28);
  *(undefined8 *)(param_1 + 0x2c) = *(undefined8 *)(param_2 + 0x2c);
  *(undefined4 *)(param_1 + 0x33) = *(undefined4 *)(param_2 + 0x33);
  FUN_1008a8bc(param_2 + 0x38);
  *(undefined4 *)(param_1 + 0x44) = *(undefined4 *)(param_2 + 0x44);
  FUN_100128b2(param_2 + 0x48);
  FUN_100128b2(param_2 + 0x60);
  FUN_1008a8bc(param_2 + 0x78);
  FUN_100128b2(param_2 + 0x84);
  FUN_10097b6a(param_2 + 0x9c);
  FUN_100128b2(param_2 + 0xa8);
  FUN_100128b2(param_2 + 0xc0);
  FUN_100128b2(param_2 + 0xd8);
  FUN_100128b2(param_2 + 0xf0);
  FUN_100128b2(param_2 + 0x108);
  FUN_100128b2(param_2 + 0x120);
  FUN_100128b2(param_2 + 0x138);
  *(undefined8 *)(param_1 + 0x150) = *(undefined8 *)(param_2 + 0x150);
  *(undefined4 *)(param_1 + 0x158) = *(undefined4 *)(param_2 + 0x158);
  FUN_1008a8bc(param_2 + 0x15c);
  *(undefined8 *)(param_1 + 0x168) = *(undefined8 *)(param_2 + 0x168);
  FUN_1008a8bc(param_2 + 0x170);
  *(undefined4 *)(param_1 + 0x17c) = *(undefined4 *)(param_2 + 0x17c);
  return param_1;
}

