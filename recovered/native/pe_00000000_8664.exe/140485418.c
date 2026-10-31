/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 140485418 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140485418(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 uVar3;
  undefined1 auStack_4b8 [32];
  undefined8 local_498;
  undefined8 local_490;
  undefined8 local_488;
  undefined8 local_480;
  undefined4 local_478;
  undefined1 local_474;
  undefined4 local_470;
  undefined4 local_46c;
  undefined4 local_468;
  undefined2 local_460;
  undefined4 local_450;
  undefined1 local_44c;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined4 local_30;
  ulonglong local_28;
  
  local_28 = ram0x000140613b10 ^ (ulonglong)auStack_4b8;
  uVar1 = param_1[1];
  uVar2 = *(undefined8 *)*param_1;
  uVar3 = FUN_1404a6230(uVar2);
  local_480 = *(undefined8 *)param_1[4];
  local_38 = *(undefined8 *)*param_1;
  local_488 = *(undefined8 *)param_1[3];
  local_498 = *(undefined8 *)param_1[2];
  local_490 = param_1[1];
  local_478 = 0;
  local_470 = 0;
  local_46c = 0;
  local_468 = 0;
  local_460 = 0;
  local_450 = 0;
  local_30 = 0;
  local_474 = 0;
  local_44c = 0;
  local_48 = 0;
  uStack_40 = 0;
  FUN_140484444(&local_498);
  FUN_1404a2310(uStack_40);
  uStack_40 = 0;
  FUN_1404a6344(uVar3,uVar2,uVar1);
                    /* WARNING: Subroutine does not return */
  FUN_14044aba0(local_28 ^ (ulonglong)auStack_4b8);
}

