/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1800ab208 */

undefined8 FUN_1800ab208(longlong param_1,undefined8 param_2)

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
  FUN_180081664(param_2,0);
  FUN_18008f7e8(local_80,param_1);
  uVar2 = FUN_18008cfa6(local_48,&DAT_18036a525);
  FUN_1800856c4(uVar2,local_80);
  local_58 = 0;
  plStack_50 = (longlong *)0x0;
  FUN_18008d278(local_70,&local_58,0,2);
  uVar2 = FUN_18008cfa6(local_48,"list");
  FUN_1800856c4(uVar2,local_70);
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
        if (*plStack_50 != plStack_50[1]) goto LAB_1800ab31e;
      }
      else if (((char)local_58 != '\x02') || (*plStack_50 != plStack_50[1])) {
LAB_1800ab31e:
        FUN_18008a2f4(local_90,&local_60);
        uVar2 = FUN_18008cfa6(&local_58,"index");
        FUN_1800856c4(uVar2,local_90);
        uVar2 = FUN_18008cfa6(local_48,"list");
        FUN_18008f85a(uVar2,&local_58);
      }
    }
    FUN_18007ff6e(&local_58);
    local_60 = local_60 + 1;
  } while( true );
}

