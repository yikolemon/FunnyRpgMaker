/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 1400c9f5a */

undefined8 FUN_1400c9f5a(longlong param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined1 local_90 [16];
  undefined1 local_80 [16];
  undefined1 local_70 [16];
  ulonglong local_60;
  undefined8 local_58;
  longlong *plStack_50;
  undefined8 local_48;
  undefined8 local_40;
  
  local_40 = 0xfffffffffffffffe;
  local_48 = param_2;
  FUN_140057552(param_2,0);
  FUN_14008df96(local_80,param_1);
  uVar2 = FUN_140057b3c(local_48,"id");
  FUN_14005783a(uVar2,local_80);
  local_58 = 0;
  plStack_50 = (longlong *)0x0;
  FUN_14008e0cc(local_70,&local_58,0,2);
  uVar2 = FUN_140057b3c(local_48,"list");
  FUN_14005783a(uVar2,local_70);
  local_60 = 0;
  do {
    if ((ulonglong)(*(longlong *)(param_1 + 0x88) - *(longlong *)(param_1 + 0x80) >> 4) <= local_60)
    {
      return local_48;
    }
    puVar1 = *(undefined8 **)(*(longlong *)(param_1 + 0x80) + local_60 * 0x10);
    (**(code **)*puVar1)(puVar1,&local_58);
    if ((char)local_58 != '\0') {
      if ((char)local_58 == '\x01') {
        if (*plStack_50 != plStack_50[1]) goto LAB_1400ca070;
      }
      else if (((char)local_58 != '\x02') || (*plStack_50 != plStack_50[1])) {
LAB_1400ca070:
        FUN_14006e0c4(local_90,&local_60);
        uVar2 = FUN_140057b3c(&local_58,"index");
        FUN_14005783a(uVar2,local_90);
        uVar2 = FUN_140057b3c(local_48,"list");
        FUN_14008e008(uVar2,&local_58);
      }
    }
    FUN_1400578a6(&local_58);
    local_60 = local_60 + 1;
  } while( true );
}

