/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1800ddc65 */

void FUN_1800ddc65(void)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong *plVar3;
  longlong local_50 [2];
  undefined8 local_40;
  
  local_40 = 0xfffffffffffffffe;
  FUN_180044980(&DAT_180402770);
  plVar1 = DAT_180418110;
  plVar3 = DAT_180418110;
  while (plVar2 = DAT_1804181b0, plVar3 = (longlong *)*plVar3, plVar3 != plVar1) {
    FUN_1800db800(&DAT_1804180c8,local_50,plVar3 + 2);
    FUN_1800d4dee("_items",plVar3[2],*(undefined8 *)(local_50[0] + 0x60));
  }
  plVar3 = DAT_1804181b0;
  while (plVar1 = DAT_180418250, plVar3 = (longlong *)*plVar3, plVar3 != plVar2) {
    FUN_1800db800(&DAT_180418168,local_50,plVar3 + 2);
    FUN_1800d4dee("_weapons",plVar3[2],*(undefined8 *)(local_50[0] + 0x60));
  }
  plVar3 = DAT_180418250;
  while (plVar3 = (longlong *)*plVar3, plVar3 != plVar1) {
    FUN_1800db800(&DAT_180418208,local_50,plVar3 + 2);
    FUN_1800d4dee("_armors",plVar3[2],*(undefined8 *)(local_50[0] + 0x60));
  }
  FUN_18023d6e0(&DAT_180402770);
  FUN_180044980(&DAT_1804026d0);
  plVar1 = DAT_1804182f0;
  plVar3 = DAT_1804182f0;
  while (plVar3 = (longlong *)*plVar3, plVar3 != plVar1) {
    FUN_1800db800(&DAT_1804182a8,local_50,plVar3 + 2);
    FUN_1800d48c4(plVar3[2],*(longlong *)(local_50[0] + 0x60) != 0);
  }
  FUN_18023d6e0(&DAT_1804026d0);
  FUN_180044980(&DAT_180402720);
  plVar1 = DAT_180418390;
  plVar3 = DAT_180418390;
  while (plVar3 = (longlong *)*plVar3, plVar3 != plVar1) {
    FUN_1800dc42c(&DAT_180418348,local_50,plVar3 + 2);
    FUN_1800d4bdc(plVar3[2],local_50[0] + 0x40);
  }
  FUN_18023d6e0(&DAT_180402720);
  return;
}

