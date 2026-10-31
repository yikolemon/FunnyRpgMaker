/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1001ca88 */

undefined4 * __thiscall
FUN_1001ca88(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            uint param_5)

{
  int iVar1;
  undefined4 uVar2;
  int *unaff_FS_OFFSET;
  undefined4 *local_2c;
  undefined4 *local_28;
  undefined4 *local_24;
  undefined1 *local_20;
  int local_1c;
  undefined1 *local_18;
  undefined4 local_14;
  
  local_20 = (undefined1 *)&local_2c;
  local_14 = 0xffffffff;
  local_18 = &LAB_100593c0;
  local_1c = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = (int)&local_1c;
  *param_1 = param_3;
  param_1[1] = param_4;
  param_1[2] = 0;
  param_1[3] = 0;
  local_28 = param_1 + 4;
  FUN_1001cd06();
  local_14 = 0;
  local_2c = param_1 + 8;
  local_24 = param_1;
  FUN_1001cd94(param_2,param_5);
  local_24[0xc] = param_2;
  local_24[0x10] = param_5;
  *(undefined1 *)(local_24 + 0x13) = 0;
  param_5 = param_5 & 0x3f;
  uVar2 = 0x43baefb;
  if (1 < param_5) {
    if ((param_5 & param_5 - 1) == 0) {
      iVar1 = 0;
      if (param_5 != 0) {
        for (; (param_5 >> iVar1 & 1) == 0; iVar1 = iVar1 + 1) {
        }
      }
      uVar2 = 0xf7000180;
      switch(iVar1) {
      case 1:
        break;
      case 2:
        uVar2 = 0xf840001b;
        break;
      case 3:
        uVar2 = 0xf8d0d01b;
        break;
      case 4:
        uVar2 = 0xf7040184;
        break;
      case 5:
        uVar2 = 0xf844001f;
        break;
      default:
        goto switchD_1001cb56_default;
      }
      local_24[0xe] = uVar2;
      local_24[0xf] = 0;
      FUN_1001ce3c();
      goto LAB_1001cb22;
    }
switchD_1001cb56_default:
    uVar2 = 0;
  }
  local_24[0xe] = uVar2;
  local_24[0xf] = 0;
LAB_1001cb22:
  FUN_1001ce44();
  *unaff_FS_OFFSET = local_1c;
  return local_24;
}

