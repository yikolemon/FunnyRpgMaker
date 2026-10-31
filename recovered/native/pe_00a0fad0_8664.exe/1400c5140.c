/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 1400c5140 */

longlong FUN_1400c5140(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  if (param_1 == param_2) {
    *(undefined4 *)(param_1 + 0x40) = *(undefined4 *)(param_2 + 0x40);
    *(undefined8 *)(param_1 + 0x48) = *(undefined8 *)(param_2 + 0x48);
    *(undefined4 *)(param_1 + 0x4f) = *(undefined4 *)(param_2 + 0x4f);
  }
  else {
    if (*(ulonglong *)(param_2 + 0x20) < 8) {
      lVar1 = param_2 + 8;
    }
    else {
      lVar1 = *(longlong *)(param_2 + 8);
    }
    FUN_14000ffc0(param_1 + 8,lVar1,*(undefined8 *)(param_2 + 0x18));
    FUN_1400587f4(param_1 + 0x28,*(longlong *)(param_2 + 0x28),
                  *(longlong *)(param_2 + 0x30) - *(longlong *)(param_2 + 0x28));
    *(undefined4 *)(param_1 + 0x40) = *(undefined4 *)(param_2 + 0x40);
    *(undefined8 *)(param_1 + 0x48) = *(undefined8 *)(param_2 + 0x48);
    *(undefined4 *)(param_1 + 0x4f) = *(undefined4 *)(param_2 + 0x4f);
    FUN_140016e5c(param_1 + 0x58);
    *(undefined8 *)(param_1 + 0x58) = *(undefined8 *)(param_2 + 0x58);
    *(undefined8 *)(param_1 + 0x60) = *(undefined8 *)(param_2 + 0x60);
    *(undefined8 *)(param_1 + 0x68) = *(undefined8 *)(param_2 + 0x68);
    *(undefined8 *)(param_2 + 0x58) = 0;
    *(undefined8 *)(param_2 + 0x60) = 0;
    *(undefined8 *)(param_2 + 0x68) = 0;
  }
  *(undefined4 *)(param_1 + 0x70) = *(undefined4 *)(param_2 + 0x70);
  FUN_14000ff1e(param_1 + 0x78,param_2 + 0x78);
  FUN_14000ff1e(param_1 + 0x98,param_2 + 0x98);
  if (param_1 == param_2) {
    FUN_14000ff1e(param_1 + 0xd0,param_2 + 0xd0);
  }
  else {
    FUN_140016e5c(param_1 + 0xb8);
    *(undefined8 *)(param_1 + 0xb8) = *(undefined8 *)(param_2 + 0xb8);
    *(undefined8 *)(param_1 + 0xc0) = *(undefined8 *)(param_2 + 0xc0);
    *(undefined8 *)(param_1 + 200) = *(undefined8 *)(param_2 + 200);
    *(undefined8 *)(param_2 + 200) = 0;
    *(undefined8 *)(param_2 + 0xb8) = 0;
    *(undefined8 *)(param_2 + 0xc0) = 0;
    FUN_14000ff1e(param_1 + 0xd0,param_2 + 0xd0);
    FUN_140041304(param_1 + 0xf0);
    *(undefined8 *)(param_1 + 0xf0) = *(undefined8 *)(param_2 + 0xf0);
    *(undefined8 *)(param_1 + 0xf8) = *(undefined8 *)(param_2 + 0xf8);
    *(undefined8 *)(param_1 + 0x100) = *(undefined8 *)(param_2 + 0x100);
    *(undefined8 *)(param_2 + 0x100) = 0;
    *(undefined8 *)(param_2 + 0xf0) = 0;
    *(undefined8 *)(param_2 + 0xf8) = 0;
  }
  FUN_14000ff1e(param_1 + 0x108,param_2 + 0x108);
  FUN_14000ff1e(param_1 + 0x128,param_2 + 0x128);
  FUN_14000ff1e(param_1 + 0x148,param_2 + 0x148);
  FUN_14000ff1e(param_1 + 0x168,param_2 + 0x168);
  FUN_14000ff1e(param_1 + 0x188,param_2 + 0x188);
  FUN_14000ff1e(param_1 + 0x1a8,param_2 + 0x1a8);
  FUN_14000ff1e(param_1 + 0x1c8,param_2 + 0x1c8);
  *(undefined8 *)(param_1 + 0x1e8) = *(undefined8 *)(param_2 + 0x1e8);
  *(undefined4 *)(param_1 + 0x1f0) = *(undefined4 *)(param_2 + 0x1f0);
  if (param_1 == param_2) {
    *(undefined8 *)(param_1 + 0x210) = *(undefined8 *)(param_2 + 0x210);
  }
  else {
    FUN_140016e5c(param_1 + 0x1f8);
    *(undefined8 *)(param_1 + 0x1f8) = *(undefined8 *)(param_2 + 0x1f8);
    *(undefined8 *)(param_1 + 0x200) = *(undefined8 *)(param_2 + 0x200);
    *(undefined8 *)(param_1 + 0x208) = *(undefined8 *)(param_2 + 0x208);
    *(undefined8 *)(param_2 + 0x208) = 0;
    *(undefined8 *)(param_2 + 0x1f8) = 0;
    *(undefined8 *)(param_2 + 0x200) = 0;
    *(undefined8 *)(param_1 + 0x210) = *(undefined8 *)(param_2 + 0x210);
    FUN_140016e5c(param_1 + 0x218);
    *(undefined8 *)(param_1 + 0x218) = *(undefined8 *)(param_2 + 0x218);
    *(undefined8 *)(param_1 + 0x220) = *(undefined8 *)(param_2 + 0x220);
    *(undefined8 *)(param_1 + 0x228) = *(undefined8 *)(param_2 + 0x228);
    *(undefined8 *)(param_2 + 0x228) = 0;
    *(undefined8 *)(param_2 + 0x218) = 0;
    *(undefined8 *)(param_2 + 0x220) = 0;
  }
  *(undefined4 *)(param_1 + 0x230) = *(undefined4 *)(param_2 + 0x230);
  return param_1;
}

