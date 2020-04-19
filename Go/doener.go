package main

type doener struct{}

func (d doener) mit(senf string) {
	if "senf" == senf {
		println("döner mit senf")
	}
}
