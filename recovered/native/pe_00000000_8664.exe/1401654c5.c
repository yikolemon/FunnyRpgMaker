/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1401654c5 */

void FUN_1401654c5(longlong param_1,longlong param_2,undefined4 param_3)

{
  longlong lVar1;
  
  FUN_1401c5830(param_1,0,0x3e0);
  if ((char)param_3 == '\0') {
    FUN_1401631e1(param_1,param_2,0);
    lVar1 = *(longlong *)(param_2 + 0xb0);
    *(longlong *)(param_1 + 800) = lVar1;
    *(longlong *)(param_1 + 0x330) = lVar1 + 0x1100;
    *(undefined8 *)(param_1 + 0x328) = *(undefined8 *)(param_2 + 0x430);
    *(undefined4 *)(param_1 + 0x34c) = *(undefined4 *)(param_2 + 0x3fc);
    *(undefined8 *)(param_1 + 0x360) = *(undefined8 *)(param_2 + 0x410);
    *(undefined4 *)(param_1 + 0x354) = *(undefined4 *)(param_2 + 0x404);
    *(undefined4 *)(param_1 + 0x348) = *(undefined4 *)(param_2 + 0x3f8);
    *(undefined8 *)(param_1 + 0x358) = *(undefined8 *)(param_2 + 0x408);
    *(undefined4 *)(param_1 + 0x350) = *(undefined4 *)(param_2 + 0x400);
    *(longlong *)(param_1 + 0x338) = param_2 + 0x368;
    *(undefined1 *)(param_1 + 0x340) = *(undefined1 *)(param_2 + 0x371);
    *(undefined4 *)(param_1 + 0x374) = *(undefined4 *)(param_2 + 0x424);
    *(undefined8 *)(param_1 + 0x380) = *(undefined8 *)(param_2 + 0x438);
    *(undefined8 *)(param_1 + 0x388) = *(undefined8 *)(param_2 + 0x440);
  }
  else {
    FUN_1401631e1(param_1,param_2,param_3);
    *(longlong *)(param_1 + 0x330) = param_2 + 0x730;
    *(undefined8 *)(param_1 + 0x390) = *(undefined8 *)(param_2 + 0x658);
    *(undefined4 *)(param_1 + 0x370) = *(undefined4 *)(param_2 + 0x660);
    *(undefined8 *)(param_1 + 0x368) = *(undefined8 *)(param_2 + 0x668);
    *(undefined4 *)(param_1 + 0x374) = *(undefined4 *)(param_2 + 0x6f0);
    *(undefined8 *)(param_1 + 0x3c8) = *(undefined8 *)(param_2 + 0x6e8);
    *(undefined4 *)(param_1 + 0x348) = *(undefined4 *)(param_2 + 0x674);
    *(undefined8 *)(param_1 + 0x358) = *(undefined8 *)(param_2 + 0x678);
    *(undefined8 *)(param_1 + 0x3a0) = *(undefined8 *)(param_2 + 0x680);
    *(undefined8 *)(param_1 + 0x3a8) = *(undefined8 *)(param_2 + 0x688);
    *(undefined8 *)(param_1 + 0x3d0) = *(undefined8 *)(param_2 + 0x720);
    *(undefined4 *)(param_1 + 0x3d8) = *(undefined4 *)(param_2 + 0x728);
    *(undefined4 *)(param_1 + 0x398) = *(undefined4 *)(param_2 + 0x670);
  }
  return;
}

