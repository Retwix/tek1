from app import app
from flask import render_template


@app.route('/', methods=['GET'])
def route_index():
	return render_template("index.html", title="Hello world", myContent="My SUper content")



@app.route('/user/<username>', methods=['GET'])
def route_user(username):
	return render_template("index.html", title="Hello " + username, myContent="My SUPER content for " + username + "!!!")


@app.route('/products', methods=['GET'])
def route_products():
	return render_template("index.html", title="Products", myContent="thoses are the products you can use")

@app.route('/account', methods=['GET'])
def route_account():
	return render_template("index.html", title="Account", myContent="this is your account")