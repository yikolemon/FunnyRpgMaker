/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1400042b2 */

undefined8
FUN_1400042b2(undefined8 param_1,undefined8 param_2,longlong *param_3,undefined1 param_4,
             undefined1 param_5,undefined1 param_6)

{
  longlong *plVar1;
  undefined8 unaff_RBX;
  longlong local_170 [7];
  longlong *local_138;
  undefined1 local_128 [168];
  undefined1 local_80 [64];
  undefined1 local_40 [16];
  undefined8 local_30;
  longlong *local_28;
  undefined8 local_20;
  
  local_20 = 0xfffffffffffffffe;
  local_30 = param_1;
  local_28 = param_3;
  FUN_140004bf8(param_1,0);
  FUN_140004d3e(local_80,local_28);
  FUN_140004db1(local_40,param_2);
  FUN_140004c42(local_170,local_40,local_80,
                CONCAT71((int7)((ulonglong)unaff_RBX >> 8),param_4) & 0xffffffff,param_5,param_6);
  FUN_140004dce(local_170,1,local_30);
  FUN_140006ea2(local_128);
  if (local_138 != (longlong *)0x0) {
    (**(code **)(*local_138 + 0x20))(local_138,local_138 != local_170);
  }
  plVar1 = (longlong *)local_28[7];
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x20))(plVar1,plVar1 != local_28);
  }
  return local_30;
}

